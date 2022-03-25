#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("\n Enter the ntarting Number=");
	scanf("%d",&a);
	printf("\n Enter the ending Number=");
	scanf("%d",&b);
	for(a=1;a<=b;a++)
	{
		printf("\n%d",a);
	}
	getch();

}
