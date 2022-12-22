DOUBLE_DIGIT_NUMBERS = range(10, 100)

sum = 0
divisor = 7

for number in DOUBLE_DIGIT_NUMBERS:
    if number % divisor == 0:
        sum += number

print(f"Suma liczb dwucyfrowych podzielnych przez {divisor} wynosi {sum}")
