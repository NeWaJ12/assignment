#include<stdio.h>
#include "intcal.h"

int main()
{
    int a,b,c;
    printf("1.Addition\n2.Substraction\n3.multiplication\n4.division\n");
    printf("Enter your choice: ");
    scanf("%d",&c);
    printf("Enter 1st num: ");
    scanf("%d",&a);
    printf("Enter 2nd num: ");
    scanf("%d",&b);
    switch(c)
    {
	case 1:
	{
		printf("%d + %d = %d\n",a,b,add(a,b));
		break;
	}
	case 2:
	{
		printf("%d - %d = %d\n",a,b,sub(a,b));		
		break;
	}
	case 3:
	{
		printf("%d * %d = %d\n",a,b,multi(a,b));
		break;
	}
	case 4:
	{
		printf("%d / %d = %d\n",a,b,divide(a,b));
		break;
	}
	default:
		printf("Entered a wrong number");
    }

    return 0;	
}
