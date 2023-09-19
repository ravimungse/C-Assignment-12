//1. Write a program to print first N terms of a Fibonacci series

main()
{
	int fib=0,n1=-1,n2=1,num,count=0;
	printf("\n Enter the Number = ");
	scanf("%d",&num);
	
	while(count<=num)
	{
		fib=n1+n2;
		n1=n2;
		n2=fib;
		printf("\n %d",fib);
		count++;			
	}
	getch();
}
