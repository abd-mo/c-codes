#include<stdio.h>
 perfect_number(int);

int main(){int n;
int p;
	printf("enter an integer number : ");
	scanf("%d",&n);
	perfect_number(n);
	}
 perfect_number(int x){
	int i;
	int sum=0;

	for(i=1;i<x;i++){
		if(x%i==0){

		sum+=i;
		printf("factor %d\n",i);}

		if(sum==x) {printf(" [%d] is perfect number ",x);
		 exit(0);}
		 
		}printf("[%d] is not perfect number ",x);} 

		


	

