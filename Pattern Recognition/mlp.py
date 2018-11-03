import pandas as pd
import numpy as numpy

from sklearn.model_selection import train_test_split
from sklearn.neural_network import MLPClassifier
from sklearn.metrics import accuracy_score

data = pd.read_csv('./Iris.csv')
X = data.drop("Species", axis = 1)
Y = data.Species

X_train, X_test, Y_train, Y_test = train_test_split(X, Y, test_size = 0.3, random_state = 1)

clf = MLPClassifier()
y_pred = clf.fit(X_train, Y_train).predict(X_test)


print(accuracy_score(y_pred, Y_test))