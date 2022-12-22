MUSICIAN_COUNT = 7
musician_list = [None] * MUSICIAN_COUNT

for i in range(MUSICIAN_COUNT):
    counter = i + 1
    print(f"---- {counter} ----")
    name = input("Podaj nazwę: ")
    debut = input("Podaj rok debiutu: ")
    song = input("Podaj nazwę utworu: ")
    views = input("Podaj liczbę wyświetleń: ")
    musician_list[i] = [name, debut, song, views]
