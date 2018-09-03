prayer-wheel: main.c main.h
	gcc -o prayer-wheel main.c -I.

.PHONY: clean

clean:
	rm -f prayer-wheel
	rm -f prayer-wheel.txt