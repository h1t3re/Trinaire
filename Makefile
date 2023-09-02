.PHONY: install
install: trinaire.c
	gcc -Wall -g trinaire.c -o trinaire; ./trinaire
