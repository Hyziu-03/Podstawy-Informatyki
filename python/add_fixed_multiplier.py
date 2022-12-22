first_number = int(input("Podaj pierwszą liczbę: "))
second_number = int(input("Podaj drugą liczbę: "))


def add(arg1, arg2):
    result = arg1 + arg2

    multiplier = 100
    result *= multiplier

    print(f"Wynik to {result}")


add(first_number, second_number)
