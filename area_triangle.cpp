#include<stdio.h>
#include<math.h>
main()
{int a,b,c,p;
float area;
printf("Enter the sides a,b and c : ");
scanf("%d %d %d",&a,&b,&c);
p = a+b+c;
area = p*(p-a)*(p-b)*(p-c);
printf("Area of Triangle : %f", sqrt(area));
}
