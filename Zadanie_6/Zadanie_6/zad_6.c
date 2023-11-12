#include <stdio.h>

int main() {

	int i;

	for (i = 0; i <= 100; i++) {
		printf("%d, ", i);
	}
	
	printf("\n\n");

	for (i = 100; i >= 0; i--) {
		printf("%d, ", i);	
	}

	printf("\n\n");

	for (i = 7; i <= 77; i += 7) {
		printf("%d, ", i);
	}

	printf("\n\n");

	for (i = 20; i >= 0; i -= 2) {
		printf("%d, ", i);
	}
}