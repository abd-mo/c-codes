#include<stdio.h>
#include<math.h>
float dist(float*,float*,float*,float*);
int main(){ float a,b,c,g;
double m;
printf("enter frisr point --\n");
printf("X1 = ");scanf("%f",&a);
printf("Y1 = ");scanf("%f",&b);
printf("X2 = ");scanf("%f",&c);
printf("Y2 = ");scanf("%f",&g);
m=dist(&a,&b,&c,&g);
printf("DISTANCE = %f",m);
return 0;	
}
float dist(float* x1,float* y1,float* x2,float* y2){
	float d;
	d =sqrt(pow((*x2-*x1),2)+pow((*y2-*y1),2));
	return d;
	
	
}

