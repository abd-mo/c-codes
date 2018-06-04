#include<stdio.h>
//write a program by using function  which reverse an array (without using a nother array )
reverse(float[]);
const int size;
int main(){
	int i;
	float arr[50];
	printf("enter size of array : ");
	scanf("%d",&size);
	for(i=0;i<size;i++)scanf("%f",&arr[i]);
	for(i=0;i<size;i++)printf("[ %.1f ]",arr[i]);
	printf("\nreverse array elements : \n");
	reverse(arr);
for(i=0;i<size;i++)printf(" [%f] ",arr[i]);		
}reverse(float asd[]){
	int i;
	float tempt=0;
	for(i=0;i<size/2;i++){
		tempt=asd[i];
		asd[i]=asd[size-1-i];
		asd[size-1-i]=tempt;
		
	}
}
