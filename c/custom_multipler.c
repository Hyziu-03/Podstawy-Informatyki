#include <stdio.h>
#include <stdlib.h>

int add(int number_1, int number_2, int times)
{
    int result = (number_1 + number_2) * times;
    printf("Wynik to %i", result);
}

int main()
{
    int first_number = 0, second_number = 0, multiplier = 1;

    printf("Podaj pierwsza liczbe: ");
    scanf("%i", &first_number);

    printf("Podaj druga liczbe: ");
    scanf("%i", &second_number);

    printf("Podaj mnoznik: ");
    scanf("%i", &multiplier);

    add(first_number, second_number, multiplier);

    return 0;
}
