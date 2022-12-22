class MySeriesRankClass:
    # konstruktor, automatycznie wywołuje się za kazdym razem jak...
    # utworysz obiekt
    # trzeba zainicjować wszystkie zmienne na tym obiekcie, dlatego tak...
    # dużo trzeba napisać
    def __init__(self, title, director, points):
        self.title = title
        self.director = director
        self.points = points


movie = MySeriesRankClass("Forrest Gump", "Robert Zemeckis", "8.8")
print(f"{movie.title} directed by {movie.director} rated at {movie.points}")
# string formatowany trzbe zacząć z f i potem w {} możesz wkładać...
# zmienne i jest to bardziej fancy zapis
