#include<stdio.h>
void main()
{
    int r,a,b;
    printf("Enter radius of circle: ");  
    scanf("%d",&r);
    float area = (22/7)*r*r;
    printf("Area is %f\n",area); 
    float peri = 2 * (22/7)*r ;
    printf("Perimeter is %f\n",peri);
}
