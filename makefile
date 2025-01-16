.PHONY: all display clean

all:
	gcc -o story main.c storylines/north.c storylines/south.c storylines/east.c storylines/west.c -lm

clean:
	rm -f story display/output.txt