CPPFLAGS=--std=c++20 -Wall
CC=c++ $(CPPFLAGS)


day01-build: day01.cpp
	$(CC) -o bin/day01 day01.cpp
day01: day01-build
	bin/day01

.PHONY: clean
clean:
	rm -f bin/*
