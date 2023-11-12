#include <stdio.h>

int main() {

	int i, j;
	for (i = 0; i < 10; i++) {
		for (j = 0; j <= i; j++)
			printf("x");
		printf("\n");

	}

	printf("\n\n");

	for (i = 10; i >= 0; i--) {
		for (j = 0; j <= i; j++)
			printf("x");
		printf("\n");

	}

	printf("\n\n");

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++)
		if (i < j){
			printf("x");
		}
		else {
			printf(" ");
		}
		printf("\n");

	}

	printf("\n\n");

	for (i = 10; i > 0; i--) {
		for (j = 0; j < 10; j++)
			if (i < j) {
				printf("x");
			}
			else {
				printf(" ");
			}
		printf("\n");

	}

	printf("\n\n");

	for (i = 0; i < 20; i++) {
		for (j = 0; j < 20; j++)
			if (j < 20 - i || j > i) {
				printf(" ");
			}
			else {
				printf("x");
			}
		printf("\n");
	}
}