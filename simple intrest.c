//simple interest
/*
simple intrest
Purity Thuo
24/09/24
*/
//simple interest=(p*r*t)/100
#include<stdio.h>
#include<conio.h>
#include <math.h>
int main(){
int t;
float p,r,si;
printf("enter the principle amount:");
scanf("%f",&p);
printf("enter the rate:");
scanf("%f" ,&r);
printf("enter the time:");
scanf("%d",&t);
si=(p*r*t)/100;
printf("the simple intrest is %f\n",si);
return 0;
}


