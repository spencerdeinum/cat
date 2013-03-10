CFLAGS=-g -Wall -Wextra

all: build compile test

build:
	@mkdir -p bin

compile:
	cc $(CFLAGS) cat.c -o bin/cat

test:
	cc $(CFLAGS) test.c -o bin/test
	./bin/test

clean:
	rm -rf bin
