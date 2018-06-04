#include<stdio.h>
int fibonacci(int );
int main(){
	int x;
	printf("Enter an integer number : ");
	scanf("%d",&x);
	printf("%d",fibonacci(x));
}
int fibonacci(int n){
	if(n==0||n==1)return n;
	else return fibonacci(n-1)+fibonacci(n-2);
	
}
