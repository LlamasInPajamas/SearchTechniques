#include <stdlib.h>

int PosBinary(int searched, int arr[], int start, int end){
	while(start <= end){
		if(arr[(start + end)/2] == searched){
			return (start + end)/2;
		}else if(searched > arr[(start + end)/2]){
			start = (start + end)/2 + 1;
		}else{
			end = (start + end)/2 - 1;
		}		
	}
	return -1;
}
int HasBinary(int searched, int arr[], int start, int end){
	while(start <= end){
		if(arr[(start + end)/2] == searched){
			return 1;
		}else if(searched > arr[(start + end)/2]){
			start = (start + end)/2 + 1;
		}else{
			end = (start + end)/2 - 1;
		}		
	}
	return 0;
}

int main(){
}
