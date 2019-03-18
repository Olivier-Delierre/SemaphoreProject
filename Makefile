# Defining compilation vars
export CC = g++
export CFLAGS = -W -Wall -g -ansi -pedantic -std=c++17

.PHONY: all test clean mrproper

all:
	make -C ./src

test:
	make -C ./test

clean:
	make -C ./src clean
	make -C ./test clean