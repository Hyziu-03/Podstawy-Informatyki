#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_title()
{
    printf(R"EOF(
         ________  ________          _________  ________          ________  ________          ___       ___  ________  ________  ________  ________  ________
        |\   ____\|\   __  \        |\___   ___|\   __  \        |\_____  \|\   __  \        |\  \     |\  \|\   ____\|\_____  \|\   __  \|\   __  \|\_____  \
        \ \  \___|\ \  \|\  \       \|___ \  \_\ \  \|\  \        \|___/  /\ \  \|\  \       \ \  \    \ \  \ \  \___| \|___/  /\ \  \|\ /\ \  \|\  \|____|\  \
         \ \  \    \ \  \\\  \           \ \  \ \ \  \\\  \           /  / /\ \   __  \       \ \  \    \ \  \ \  \        /  / /\ \   __  \ \   __  \    \ \__\
          \ \  \____\ \  \\\  \           \ \  \ \ \  \\\  \         /  /_/__\ \  \ \  \       \ \  \____\ \  \ \  \____  /  /_/__\ \  \|\  \ \  \ \  \    \|__|
           \ \_______\ \_______\           \ \__\ \ \_______\       |\________\ \__\ \__\       \ \_______\ \__\ \_______|\________\ \_______\ \__\ \__\      ___
            \|_______|\|_______|            \|__|  \|_______|        \|_______|\|__|\|__|        \|_______|\|__|\|_______|\|_______|\|_______|\|__|\|__|      \__\
    )EOF");
    printf("\n");
}

int main()
{
    print_title();

    srand(time(NULL));
    int random_number = rand() % 100 + 1, guess = 0, attempts = 1;

    printf("Wylosowalem liczbe z zakresu od 1 do 100\n\n");

    while(guess != random_number)
    {
        printf("To twoja %i proba. ", attempts);

        printf("Zgadnij co to za liczba: ");
        scanf("%i", &guess);

        if(guess == random_number)
            printf("Brawo, udalo ci sie zgadnac\n\n");
        else if(guess > random_number)
            printf("Ta liczba jest za duza\n\n");
        else
            printf("Ta liczba jest za mala\n\n");

        attempts++;
    }

    return 0;
}
