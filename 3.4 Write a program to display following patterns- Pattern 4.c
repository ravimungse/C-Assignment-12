//3. Write a program to display following patterns
//pattern 4
//ABCD
//ABC
//AB
//A
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	char c;
	for(a=1;a<=4;a++)
	{
		c='A';
		for(b=1;b<=4;b++)
		{
			if(b>=1&&b<=5-a)
			{
				printf("%c",c);
				c++;
			}
			else
			printf(" ");
		}
		printf("\n");
	}
}
