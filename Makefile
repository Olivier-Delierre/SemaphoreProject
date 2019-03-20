# Defining compilation vars
export CC = g++
export CFLAGS = -W -Wall -g -ansi -pedantic -std=c++17

.PHONY: all test clean mrproper

all:
	make -C ./src
	make -C ./src/Carrefour
	make -C ./src/Generateur

carrefour:
	make -C ./src/Carrefour

generateur:
	make -C ./src/Generateur

test:
	make -C ./test

clean:
	@rm -rf bin/*
	@rm -rf obj/*
	make -C ./test clean

test-mrproper:
	make -C ./test mrproper