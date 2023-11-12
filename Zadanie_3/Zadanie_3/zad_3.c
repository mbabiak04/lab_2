#include <stdio.h>

int main() {

	int n, liczba, suma = 0;

	printf("Podaj ilosc liczb w ciagu: ");
	scanf_s("%d", &n);

	printf("Podaj %d liczb:\n", n);

	for (int i = 0; i < n; i++) {
		printf("Liczba %d: ", i + 1);
		scanf_s("%d", &liczba);

		if (liczba % 2 == 0) {
			suma += liczba;
		}

	}

	printf("Suma liczb parzystych tego ciagu wynosi: %d", suma);

}

