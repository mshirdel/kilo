build:
	$(CC) kilo.c -o kilo

run: build
	./kilo

build_sandbox:
	$(CC) main.c -o sandbox

sandbox: build_sandbox
	./sandbox
