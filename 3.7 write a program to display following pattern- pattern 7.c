//3.7 write a program to display following pattern
//pattern 7
//   *
//  ***
// *****
//  ***
//   *
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=5;b++)
		{
			if(a>=3)
			{
				
				if(b>=4-a&&b<=2+a)
				printf("%d",b);	
				else
				printf(" ");
			}
			else
			printf(" ");
		}
	printf("\n");
	}
}
