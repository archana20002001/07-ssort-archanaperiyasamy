 #include<stdio.h>
#include <stdlib.h>


void swap_max(int arr[], int l , int n){
	int idx=n;
	for(int a=n; a<l; a++){
		if(arr[a]>arr[idx])
			idx=a;
	}
	int temp=arr[n];
	arr[n]=arr[idx];
	arr[idx]=temp;
}


void ssort(int arr[], int l){
	for(int b=0; b<l; b++){
		swap_max(arr,l,b);
	}
}
