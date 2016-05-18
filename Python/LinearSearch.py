def HasLinear(searched,arr,start,size):
	for i in range(0, size):
		if arr[i] == searched:
			return 1
	return 0
def PosLinear(searched,arr,start,size):
	for i in range(0, size):
		if arr[i] == searched:
			return i
	return -1
