first_number = int(input("Podaj pierwszą liczbę: "))
second_number = int(input("Podaj drugą liczbę: "))
multiplier = int(input("Podaj mnożnik: "))


def add(arg1, arg2, times):
    result = arg1 + arg2

    result *= times

    print(f"Wpisałeś {arg1} i {arg2}")
    print(f"Wynik to {result}")


add(first_number, second_number, multiplier)
