//linear search 
#include<stdio.h>
int size=20;
int linear_search(int[],int,int);

	int main(){

	int arr[20]={1,2,3,4,7,9,10,11,12,15,21,23,24,32,45,48,51,55,67,78};
	int i,a;
	
	for(i=0;i<size;i++){printf(" [%d] ",arr[i]);
	}printf("\n");
	printf("enter your value : ");
	scanf("%d",&a);
	linear_search(arr,size,a);
}
int linear_search(int arr1[],int n,int key){
	int i;
	for(i=0;i<n;i++){
		if(arr1[i]==key){
			printf("your value %d ");
		}
		
	}return -1;
}
