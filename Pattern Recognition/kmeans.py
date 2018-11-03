import numpy as np
import pandas as pd

from matplotlib import pyplot as plt
from sklearn.cluster import KMeans

data = pd.read_csv('./Iris.csv')
x = data.iloc[:, [1,2,3,4]].values

kmeans = KMeans(n_clusters = 3, random_state = 0)
y = kmeans.fit_predict(x)

plt.xlabel(data.columns[1])
plt.ylabel(data.columns[2])

plt.scatter(x[y == 0, 0], x[y== 0, 1], c = 'red', marker = 'o', label = 'Iris-setosa')
plt.scatter(x[y == 1, 0], x[y == 1, 1], c = 'blue', marker = ',', label = 'Iris-versicolour')
plt.scatter(x[y == 2, 0], x[y == 2, 1], c = 'green', marker = '^', label = 'Iris-virginica')
plt.legend()

plt.show()