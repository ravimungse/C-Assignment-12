//3.2 Write a program to display following patterns
//pattern 3
//   1
//  121
// 12321
//1234321
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	c=1;
	for(a=1;a<=4;a++)
	{
		c=1;
		for(b=1;b<=7;b++)
		{
			if(b>=5-a&&b<=3+a)
			{
				printf("%d",c);
				if(b>=4)
				c--;
				else
				c++;
			}
			else
			printf(" ");
		}
		printf("\n");
	}
}
