#include <stdlib.h>

int HasLinearWStart(int searched,int arr[],int size,int start){
	for(int i = start;i < size; i++)
		if(arr[i] == searched)
			return 1;
	return 0;
}
int HasLinear(int searched,int arr[],int size){
	return HasLinearWStart( searched, arr, size, 0);
}
int PosLinearWStart(int searched,int arr[],int size,int start){
	for(int i = start;i < size; i++)
		if(arr[i] == searched)
			return i;
	return -1;
}
int PosLinear(int searched,int arr[],int size){
	return PosLinearWStart( searched, arr, size, 0);
}


int main(){
}
