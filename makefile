parsefile: parse.c
	gcc parse.c -o parsefile
run: parsefile
	./parsefile
