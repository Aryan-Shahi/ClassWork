#include<stdio.h>
void main()
{
    int r,a,b;
    int p,t,ra,n;
    printf("Enter radius of circle: ");  
    scanf("%d",&r);
    float area = (22/7)*r*r;
    printf("Area is %f\n",area); 
    printf("Enter length and breadth: \n");
    scanf("%d%d",&a,&b);
    float peri = 2 * (a+b);
    printf("Perimeter is %f\n",peri);
    printf("Enter principle time, rate: \n");
    scanf("%d%d%d",&p,&t,&ra);
    float si = p * t * ra/100;
    float ci = p*(1+(ra/100)^(t)-1);
    printf("Simple Interest is %f\n",si);
    printf("Compound Interest is %f\n",ci);


}
