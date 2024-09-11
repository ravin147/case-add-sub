#include<stdio.h>
int main()
{
int a,b,n;
printf("enter the number a:");
scanf("%d",&a);
printf("enter the number b:");
scanf("%d",&b);
printf("\nselect the operator:");
scanf("%d",&n);
switch(n){
	case 1:
	printf("add%d",a+b);
	break;
	case 2:
	printf("sub%d",a-b);
	break;
	case 3:
	printf("mul%d",a*b);
	break;
	case 4:
	printf("div%d",a/b);
	break;
	case 5:
	printf("mod%d",a%b);
	break;
	case 6:
	printf("a sq%d",a*a);
	break;
	case 7:
	printf("b sq%d",b*b);
	break;
	return 0;
}
}
