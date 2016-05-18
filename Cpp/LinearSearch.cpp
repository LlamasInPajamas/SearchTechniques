#include <bits/stdc++.h>
using namespace std;

bool HasLinear(int searched,int arr[],int size,int start = 0){
	for(int i = start;i < size; i++)
		if(arr[i] == searched)
			return true;
	return false;
}
int PosLinear(int searched,int arr[],int size,int start = 0){
	for(int i = start;i < size; i++)
		if(arr[i] == searched)
			return i;
	return -1;
}

int main(){
}
