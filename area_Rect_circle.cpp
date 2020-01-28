#include<stdio.h>
main()
{int l,b,r; 
float area_rect, area_circle;
printf("Enter length and breadth : ");
scanf("%d %d",&l,&b);
area_rect = l*b;
printf("\narea of rectangle : %f", area_rect);
printf("\nEnter radius of circle : ");
scanf("%d",&r);
area_circle = 3.14*r*r;
printf("\narea of circle : %f",area_circle);
}




