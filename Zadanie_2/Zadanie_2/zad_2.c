#include <stdio.h>

int main()
{
	int liczba, dodatnie = 0, ujemne = 0, SumaDod = 0, SumaUj = 0;

	printf("Podaj 10 liczb:\n ");

	for (int i = 0; i < 10; i++) {
		printf("Liczba %d:", i + 1);
		scanf_s("%d", &liczba);

		if (liczba > 0) {
			dodatnie++;
			SumaDod += liczba;

		}
		else if (liczba < 0) {
			ujemne++;
			SumaUj += liczba;
		}

	}

	printf("Ilosc liczb dodatnich: %d\n", dodatnie);
	printf("Suma liczb dodatnich: %d\n", SumaDod);
	printf("Ilosc liczb ujemnych: %d\n", ujemne);
	printf("Suma liczb ujemnych: %d\n", SumaUj);


}