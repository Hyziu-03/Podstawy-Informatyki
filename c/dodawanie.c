#include <stdio.h>
#include <stdlib.h>

int dodawanie()
{
    int number = 0, sum = 0;

    for(int i = 0; i < 10; i++)
    {
        printf("Suma wynosi %i", sum);
        printf("\n");

        do
        {
            printf("Podaj %i liczbe: ", i + 1);
            scanf("%i", &number);
        } while(number > 10 || number < 0);

        sum += number;
    }

    printf("Suma wynosi %i", sum);
}

int main()
{
    dodawanie();
    return 0;
}
