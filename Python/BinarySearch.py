def PosBinary(searched, arr, start, end):
	while start <= end :
		if arr[(start + end)/2] == searched:
			return ((start + end)/2)
		elif searched > arr[(start + end)/2]:
			start = (start + end)/2 + 1
		else:
			end = (start + end)/2 - 1
	return -1
def HasBinary(searched, arr, start, end):
	while start <= end :
		if arr[(start + end)/2] == searched:
			return 1
		elif searched > arr[(start + end)/2]:
			start = (start + end)/2 + 1
		else:
			end = (start + end)/2 - 1
	return 0
