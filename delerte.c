#include<stdio.h>
#include<stdlib.h>
int main(){
	char filename[25];
	int i;
	puts("enter your file name : ");
	gets(filename);
	i=remove(filename);// use to remove files
	if(i==0)puts("the file has been deleted");
	else puts("the process is not complete");
}
