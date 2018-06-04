//---------bubble sort----------//
// -----very important----//
// The order of the array  ascending ( artan ) and descending( azalan )
#include<stdio.h>
#define size 6
void sort_Ascending(int*,int);
void sort_Descending(int*,int);
void swap(int*,int*);
void swap1(int*,int*);
int main(){int arr[size];
int i;
printf("enter array elements : \n");
for(i=0;i<size;i++)scanf("%d",&arr[i]);
printf("array elements before doing order\n\n");
for(i=0;i<size;i++)printf("[ %d ]",arr[i]);
printf("\n\n Descending order\n\n");
sort_Descending(arr,size);
for(i=0;i<size;i++)printf("[ %d ]",arr[i]);
printf("\n\n Ascending order\n\n");
sort_Ascending(arr,size);
for(i=0;i<size;i++)printf("[ %d ]",arr[i]);
}void sort_Descending(int *ptr1,int n){
	int i,j;
	for(i=0;i<n-1;i++){for(j=i+1;j<n;j++)
	swap(ptr1+i,ptr1+j);
	}
}void swap(int*a,int*b){
	int tempt;
	if(*a<*b){
		tempt=*a;
		*a=*b;
		*b=tempt;
		}
}void sort_Ascending(int *ptr2,int s){
	int i,j;
	for(i=0;i<s-1;i++){for(j=i+1;j<s;j++)
	swap1(ptr2+i,ptr2+j);
	}}
	void swap1(int*c,int*d){
	int tempt;
	if(*c>*d){
		tempt=*c;
		*c=*d;
		*d=tempt;
	}}
