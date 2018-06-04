//binary search algorithm in array
#include<stdio.h>
int size=20;

int binarysearch(int[],int,int);
int main(){int center=size/2;
int result;
	int arr[size];int i,j,k,a;
	for(i=0;i<size;i++)scanf("%d",&arr[i]);
	for(i=0;i<size;i++){printf(" [%d] ",arr[i]);
	}printf("\n");
	printf("enter your value : ");
	scanf("%d",&a);
	binarysearch(arr,size,a);

	
	
}
int binarysearch(int arr1[],int n ,int key) {
	
	int low=0,mid,high=n-1;
	while(low<=high){
		mid=(low+high)/2;
		if(key==arr1[mid]){printf("we had found yor value\n%d",key);
  			break;
		}
		else if(key<arr1[mid])high=mid-1;
		else low=mid+1;
		
	}return -1;
}


