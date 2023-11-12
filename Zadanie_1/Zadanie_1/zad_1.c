#include <stdio.h>

int main() 
{
	float liczba, suma = 0, srednia, max;
	int ileLiczb = 0;

	do 
	{
		printf("Podaj liczbe: ");
		scanf_s("%f", &liczba);

		if (ileLiczb == 0) max = liczba;
		else 
		{
			if (max < liczba) max = liczba;
		}

		if (liczba > 0) 
		{
			suma += liczba;
			ileLiczb++;
		}
	} while (liczba > 0);

	printf("Suma: %f ", suma);
	printf("Srednia: %f ", suma / ileLiczb);
	printf("max: %f ", max);

}