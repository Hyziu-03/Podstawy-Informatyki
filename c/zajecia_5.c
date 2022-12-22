#include <stdio.h>
// Dolaczenie biblioteki standard input output library
// Definiuje ona kilka typów, makr oraz funkcje dzialajace ze strumieniami wejscia i wyjscia
#include <stdlib.h>
// Dolaczenie biblioteki standard library
// Definiuje ona kilka typów, mark oraz funkcje do przeprowadzania róznych operacji

int main()
// Zadeklarowanie funkcji <<main>>, któa zwróci wartosc calkowit¹a
// To szkielet calego programu, instrukcje wykonaja sie tak, jak zostaly zapisane w funkcji << int main()>>
{
    int number;
    // Zadeklarowanie zmiennej typu calkowitego o nazwie <<number>>

    printf("Enter the number: ");
    // Wypisanie tekstu <<Enter the number:>> na ekran

    scanf("%i", &number);
    // Odebranie od uzytkownika wartosci i zapisanie jej do zmiennej <<number>>, <<i>> oznacza typ calkowitoliczbowy

    printf("You entered the number %i", number);
    // Wypsanie na ekran tekstu <<You entered the number>> i wartosci zmiennej number typu calkowitoliczbowego

    return 0;
    // Zakonczenie programu poprzez zwrócenie wartosci <<1>>, czyli sukces
}
