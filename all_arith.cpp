#include<stdio.h>
main()
{int a,b,d;
float c;
printf("Enter two numbers : ");
scanf("%d %d",&a,&b);
printf("1. Addition \n2. Substraction \n3. Multiplication \n");
printf("4. Division \n5. Modulas\n");
scanf("%d",&d);
switch(d)
{case 1:
	c=a+b;
	printf("%f",c);
	break;
case 2:
	c=a-b;
	printf("%d - %d = %f",a,b,c);
	break;
case 3:
	c=a*b;
	printf("%d * %d = %f",a,b,c);
	break;
case 4:
	c=a/b;
	printf("%d / %d = %f",a,b,c);
	break;
case 5:
	c=a%b;
	printf("%d % %d = %c",a,b,c);
	break;
default:
	printf("ERROR");
	break;
}}

