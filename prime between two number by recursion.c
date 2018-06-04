#include<stdio.h>
  int prime(int, int);
  int main(){int n;
         int i,result=1;
         printf(" enter an integer number (+) : ");
         scanf("%d",&n);
         for(i=2;i<=n;++i)
         {
         result = prime(i,i/2);
         if(result==1)
         printf(" %d is prime number\n",i);
         }
         return 0;
         }
int prime(int num, int max){
         if(max == 1)
         return 1;
         else
         {
         if(num % max == 0)
         return 0;
         else
         prime(num, max-1);
         }
         }
