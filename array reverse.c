#include<stdio.h>
#define size 6
void array_reverse(int[],int);
int main(){
	int arr[size];
	int i;
	printf("enter array's elements : ");
	for(i=0;i<size;i++)scanf("%d",&arr[i]);
	printf("array before changing : ");
	for(i=0;i<size;i++)printf(" [%d] ",arr[i]);
	printf("\narray after reverse operation : ");
	array_reverse(arr,size);
	return 0;
}
void array_reverse(int arr1[],int n){
	int i;
	for(i=n-1;i>=0;i--)printf(" [%d] ",arr1[i]);
}
