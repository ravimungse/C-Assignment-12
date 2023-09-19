//3. Write a program to display following patterns
//patern 1
//   *
//  **
// ***
//****  
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	
	for(a=1;a<=4;a++)
	{
		for(b=1;b<=4;b++)
		{
			if(b>=5-a)
			printf("*");
			else
			printf(" "); 
		}
		printf("\n");
	}
	getch();	
}
