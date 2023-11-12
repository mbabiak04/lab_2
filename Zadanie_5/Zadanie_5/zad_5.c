#include <stdio.h>

int main() {

	int n, punkty, suma = 0, Liczba_stud = 0;

	printf("Podaj liczbe studentow w grupie: ");
	scanf_s("%d", &n);

	while (Liczba_stud < n) {
		printf("Podaj liczbe punktow %d studenta: ", Liczba_stud + 1);
		scanf_s("%d", &punkty);
		suma += punkty;
		Liczba_stud++;
	}
	
	if (Liczba_stud > 0) {
		double srednia = (double)suma / Liczba_stud;
		printf("Srednia punktow tych studentow wynosi: %.2lf", srednia);

	
	}
	else {
		printf("Brak studentow w gupie");
	}

}