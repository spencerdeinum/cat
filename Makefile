CFLAGS=-g -Wall -Wextra

all: build compile test

build:
	@mkdir -p bin
	echo "Hello, World!\ntesting dat cat." > bin/test.txt

compile:
	cc $(CFLAGS) cat.c -o bin/cat

test:
	cc $(CFLAGS) test.c -o bin/test
	./bin/test

clean:
	rm -rf bin

run: build compile
	./bin/cat ./bin/test.txt ./bin/test.txt
