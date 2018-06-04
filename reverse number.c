#include<stdio.h>
int reverse(int);
int main(){
	int n;
	int m;
	char ch;
	do{
	printf("enter an integer number : ");
	scanf("%d",&n);
	m=reverse(n);
	printf("%d\n",m);
	printf("do you want to do another operation !!?? [Y OR N]...");
	scanf(" %c",&ch);
	}while(ch=='y'||ch=='Y');
	return 0;
}
int reverse(int x){
	int result=0;
	int y;
	while(x!=0){
		y=x%10;
		result=result*10+y;
		x=x/10;
		}return result;}
