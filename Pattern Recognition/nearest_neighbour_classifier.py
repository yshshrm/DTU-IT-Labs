import math
 
training_data = [[90, 80], [85, 90], [76, 96], [30, 20], [20, 15], [25,30],]
 
training_label = [1, 1, 1, 0, 0, 0,]
 
def euc_dist(x1, y1):
	min = math.sqrt( (training_data[0][0]-x1)**2 + ( training_data[0][1]-y1)**2 )
	min_index = 0
	for i in range(1, len(training_data)):
		temp = math.sqrt( (training_data[i][0]-x1)**2 + ( training_data[i][1]-y1)**2 )
		if(temp < min):
			min_index = i
			min = temp
	return training_label[min_index]
 
 
'''
x = int(input())
y = int(input())
 
result = euc_dist(x, y)
 
if(result == 1):
	print('pass')
else:
	print('fail')
'''
 
# new way
 
'''
 
x = 0
y = 0
 
while(euc_dist(x, y) != 1):
	x+=1
	y+=1
 
print(x)
print(y)
 
'''
 
# minimum sum
 
minx = 100
miny = 100
min_sum = 200
 
for x in range(0, 101):
	for y in range(0, 101):
		if(euc_dist(x, y) == 1 and x + y < min_sum):
			min_sum = x + y
			minx = x
			miny = y
 
print(minx)
print(miny)