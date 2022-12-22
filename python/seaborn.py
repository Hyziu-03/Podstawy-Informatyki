import numpy
import pandas
import matplotlib.pyplot as plt
import seaborn as sns

titanic = sns.load_dataset("titanic")

sns.catplot(
    data=titanic, y="deck", hue="class", kind="count",
    palette="pastel", edgecolor=".6"
)
