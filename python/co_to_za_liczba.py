    from random import randint

    print("""
    _____ ____    _______ ____    ______           _      _____ _____ __________         ___  
    / ____/ __ \  |__   __/ __ \  |___  /   /\     | |    |_   _/ ____|___  /  _ \   /\  |__ \ 
    | |   | |  | |    | | | |  | |    / /   /  \    | |      | || |       / /| |_) | /  \    ) |
    | |   | |  | |    | | | |  | |   / /   / /\ \   | |      | || |      / / |  _ < / /\ \  / / 
    | |___| |__| |    | | | |__| |  / /__ / ____ \  | |____ _| || |____ / /__| |_) / ____ \|_|  
    \_____\____/     |_|  \____/  /_____/_/    \_\ |______|_____\_____/_____|____/_/    \_(_)  
    """)


    random_number = randint(0, 100)
    guess = 0
    attempts = 1

    print("Wylosowałem liczbę z zakresu od 1 do 100")

    while guess != random_number:
        guess = int(input(f'To twoja {attempts} próba. Zgadnij co to za liczba: '))

        if guess == random_number:
            print("Brawo, udało ci się zgadnąć")

        elif guess > random_number:
            print("Ta liczba jest za duża")

        else:
            print("Ta liczba jest za mała")

        attempts += 1
