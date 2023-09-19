//3.5 Write a program to display following pattern 
//pattern-7
//1000001
// 10001
//  101
//   1
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	
	for(a=1;a<=4;a++)
	{
		for(b=1;b<=7;b++)
		{
			if(b>=a&&b<=8-a)
			{
				if(b==a||b==8-a)
				printf("1");
				else
				printf("0");
			}
			else
			printf(" ");
		}
	printf("\n");
	}
	getch();
}
