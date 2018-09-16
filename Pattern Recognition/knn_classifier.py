K = 3
 
training_data = [[90, 80], [85, 90], [76, 96], [30, 20], [20, 15], [25,30],]
 
training_label = [1, 1, 1, 0, 0, 0,]
 
def manhattan_dist(x1, x2, y1, y2):
	return abs(x1 - y1) + abs(x2 - y2);
 
result = []
 
y1 = int(input())
y2 = int(input())
 
for i in range(0, len(training_data)):
	result.append([manhattan_dist(training_data[i][0], training_data[i][1], y1, y2), i])	
 
result.sort()
 
print(result)
 
sum = 0
 
for i in range(0, K):
	print(result[i])
	sum+=training_label[result[i][1]]
 
if(sum > K//2):
	print("pass")
else:
	print("fail")
