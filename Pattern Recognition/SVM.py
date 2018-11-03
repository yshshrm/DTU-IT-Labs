import pandas as pd
data = pd.read_csv("https://archive.ics.uci.edu/ml/machine-learning-databases/iris/iris.data")
data.head()
data.columns = ["sl","sw","pl","pw","Species"]
from sklearn.svm import SVC
svm = SVC()
x = data.drop(["Species"],axis=1)
y = data["Species"]
from sklearn.model_selection import train_test_split
x_train,x_test,y_train,y_test = train_test_split(x,y,test_size=0.4,random_state=42)
svm.fit(x_train,y_train)
pred = svm.predict(x_test)
print("\nPredicted values:")
print(pred)
from sklearn.metrics import accuracy_score
print("Accuracy:")
print(accuracy_score(y_test,pred))




