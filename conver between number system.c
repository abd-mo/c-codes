#include<stdio.h>
#include <conio.h>
#include<math.h>
#define size 32
void decimalTObinary(int[],int);
void binaryTOdecimal(char[],int);
int main(){
	int a;
	char ch,number[9];// because non character will take a place inside the array '0'
	do{
    int arr[size];
	printf("PLZ choose your system : \n1-decimal to binary\t2-binary to decimal\n");
	scanf("%d",&a);
	if(a==1)decimalTObinary(arr,size);	
	else if(a==2){printf("enter yor binary number : ");
       scanf("%s",number);
	binaryTOdecimal(number,(int)sizeof(number)/sizeof(char));}
	printf("\nDo you want to make another operation!!??[Y OR N]\n");
	scanf(" %c",&ch);
	}while(ch=='y'||ch=='Y');
	return 0;
}
void decimalTObinary(int arr1[],int x){int i=0,j,rest,decimal;
	printf("enter a decimal number:");
	scanf("%d",&decimal);
	int n =  decimal;
	while(decimal>0){
	rest=decimal%2;
	arr1[i]=rest;
	decimal=decimal/2;
	i++;}
	printf("\nyour value  %d is : ",n);
	for(j=i-1;j>=0;j--)printf("%d",arr1[j]);
	}
void binaryTOdecimal(char arr2[],int y){
int i, sum=0;
int value=0;
for(i=0;i<8;i++){if(arr2[i]=='0') value=0;
else value=1;
sum+=value*pow(2,i);}	
printf("\n%d",sum);		
}
