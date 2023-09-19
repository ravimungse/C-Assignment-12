//3. Write a program to display following patterns
//pattern 5
//ABCDCBA
// ABCBA
//  ABA
//   A
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	char c;
	for(a=1;a<=4;a++)
	{
		c='A';
		for(b=1;b<=7;b++)
		{
			if(b>=a&&b<=8-a)
			{
				printf("%c",c);
				if(b<4)
				c++;
				else
				c--;
			}
			else
			printf(" ");
		}
	printf("\n");
	}
	getch();
}
