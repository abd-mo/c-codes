#include<stdio.h>
perfect_number(int);
int main(){int x;
int i;

printf("eneter an integer number : ");
scanf("%d",&x);
printf("---------\nperfect numbers between 1 and [%d]---------\n\n",x);
for(i=1;i<=x;i++){
if(perfect_number(i)==1)perfect_number(i);

}


}
perfect_number(int a){
	int i,j;
	int sum=0;
for(i=1;i<a;i++){
		if(a%i==0){sum+=i;}
		if(a==sum){
		printf("[%d] is perfect number \n",a);
		break;
		}
		
		
	} }

