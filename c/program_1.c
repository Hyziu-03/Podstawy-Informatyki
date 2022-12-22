#include <stdio.h>
#include <stdlib.h>

int add(int number_1, int number_2)
{
    int result = number_1 + number_2, multiplier = 100;
    result *= multiplier;
    printf("Wynik to %i", result);
}

int main()
{
    int first_number = 0, second_number = 0;

    printf("Podaj pierwsza liczbe: ");
    scanf("%i", &first_number);

    printf("Podaj druga liczbe: ");
    scanf("%i", &second_number);

    add(first_number, second_number);

    return 0;
}
