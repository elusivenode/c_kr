#include <stdio.h>

int main() {
	
	int c;

	while ((c = getchar()) != EOF) {
		putchar(c);
	}
	printf("Leaving now. EOF reached. EOF character is %d\n", EOF);
}
