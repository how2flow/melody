#!/usr/bin/make -f

# toolchains
CC = gcc

# options
CFLAGS = -g `pkg-config --cflags libwiringpi2` -I$(include_dirs)
LDFLAGS = `pkg-config --libs libwiringpi2`
TARGET = main # final file name.

# params
build_dirs = $(PWD)/build
include_dirs = $(PWD)/include
srcs = $(wildcard ./src/*.c)
objs = $(patsubst %.c, $(build_dirs)/%.o, $(srcs))

# functions
all: $(TARGET)

$(TARGET): $(objs)
	@$(CC) -o $@ $(objs) $(CFLAGS) $(LDFLAGS)

$(build_dirs)/%.o: %.c # {$@: %.o} {$<: %.c}
	@mkdir -p $(shell dirname $@)
	@$(CC) -c -o $@ $< $(CFLAGS) $(LDFLAGS)

clean:
	@rm -rf $(build_dirs) $(TARGET)
