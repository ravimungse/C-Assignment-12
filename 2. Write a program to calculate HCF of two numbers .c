//2. Write a program to calculate HCF of two numbers 
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,hcf;
	printf("Enter the number 1 = ");
	scanf("%d",&a);
	printf("Enter the number 2 = ");
	scanf("%d",&b);
	for(hcf=a>b?a:b;hcf>=1,hcf--;)
	{
		if(a%hcf==0&&b%hcf==0)
		{
			printf("HCF is = %d",hcf);
			break;
		}	
	}	
	getch();
	
}
