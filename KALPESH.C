#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c=0;
	clrscr();
	printf("Enter the two number=");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("\n Addition %d",c);
	c=a-b;
	printf("\n substraction %d",c);
	c=a*b;
	printf("\n cmltiplication %d",c);
	c=a%b;
	printf("\n division %d",c);
	getch();
}