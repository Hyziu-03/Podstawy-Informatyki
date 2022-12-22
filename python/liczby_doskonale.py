def get_factors(number):
    factors = []
    for i in range(1, number):
        if number % i == 0:
            factors.append(i)
    return factors


def get_sum(factors):
    sum = 0
    for factor in factors:
        sum += factor
    return sum


number = int(input("Podaj liczbę: "))

factors = get_factors(number)
sum = get_sum(factors)

if sum == number:
    print(f"{number} jest liczbą doskonałą")
else:
    print(f"{number} nie jest liczbą doskonałą")
