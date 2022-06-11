#include<stdio.h>
#include<conio.h>
void main()
{
	float rupee,RS;
	clrscr();


	printf("\n Enter rupee price:");
	scanf("%f",&rupee);

	RS=77.42*rupee;
	printf("\n convert dollar to rupee: %f",RS);
	getch();
}