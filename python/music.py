class MyMusicCLass:
    def __init__(self, name, debut, song, views):
        self.title = name
        self.debut = debut
        self.song = song
        self.views = views

    def __print_musician__(self):
        return f"{self.name} {self.debut} {self.song} {self.views}"


MUSICIAN_COUNT = 7
musician_list = []

for i in range(MUSICIAN_COUNT):
    counter = i + 1
    print(f"---- {counter} ----")
    name = input("Podaj nazwę: ")
    debut = input("Podaj rok debiutu: ")
    song = input("Podaj nazwę utworu: ")
    views = input("Podaj liczbę wyświetleń: ")
    musician = MyMusicCLass(name, debut, song, views)
    musician_list.append(musician)
