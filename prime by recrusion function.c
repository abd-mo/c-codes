#include<stdio.h>
// you can do so by two way  1-by recursion function --- 2-without functions
int prime(int,int);
int main(){int x,j;

	printf("Enter an integer number (+): ");
	scanf("%d",&x);
	for(j=1;j<=x;j++){
prime(x,j);
	if(x==prime(x,j))printf("is primer %d",prime(x,j));	}
	
}
int prime(int n,int i){
	if(i==1)return 1;
	else if(n%i==0)return 0;
	else return prime(n,i-1);
	
}
