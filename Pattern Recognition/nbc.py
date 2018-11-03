import numpy as np
import pandas as pd

from sklearn.naive_bayes import GaussianNB
from sklearn.model_selection import train_test_split
from sklearn.metrics import accuracy_score

data = pd.read_csv('glass.csv')

data= data.values

train, test,ptrain,ptest=train_test_split(data[:,:-1],data[:,10],random_state=1)

pred= GaussianNB().fit(train,ptrain).predict(test)
print(ptest)
print(pred)
print(accuracy_score(ptest,pred))