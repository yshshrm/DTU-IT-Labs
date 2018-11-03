from sklearn.linear_model import LinearRegression
import numpy as np
import matplotlib.pyplot as plt

x = [60, 80, 90, 70]
x = np.asarray(x)
x = x.reshape(-1, 1)

y = [200, 300, 390, 250]
y = np.asarray(y)
y = y.reshape(-1, 1)

x_test = [65, 87, 97]
x_test = np.asarray(x_test)
x_test = x_test.reshape(-1, 1)

lm = LinearRegression()

lm.fit(x, y)
prediction = lm.predict(x_test)

for i in range(3):
    print("For 12th marks = ", x_test[i], ", marks in B.Tech =", prediction[i])

plt.scatter(x, y,  color='black')
plt.scatter(x_test, prediction)
plt.plot(x_test, prediction, color='blue', linewidth=3)
plt.xlabel('Marks in XII')
plt.ylabel('Marks in BTech')
plt.title('Linear Regression')

plt.show()