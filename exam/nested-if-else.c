#include<stdio.h>
main()
{
	int a,b,c,d,e;
	printf("Enter the A :");
	scanf("%d",&a);
		printf("Enter the B :");
	scanf("%d",&b);
		printf("Enter the c :");
	scanf("%d",&c);
		printf("Enter the D :");
	scanf("%d",&d);
			printf("Enter the E :");
	scanf("%d",&e);
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				if(a>e)
				{
					printf("A IS MAXIMUM ");
				}
				else
				{
					printf("E IS MAXIMUM ");
				}
			}
			else
			{
				if(d>e)
				{
					printf("D IS MAXIMUM ");
				}
				
				else
				{
					printf("E IS MAXIMUM ");
				}
			}
			
		}
		else
		{
			if(c>d)
			{
				if(c>e)
				{
					printf("C IS MAXIMUM ");
				}
				else
				{
					printf("E IS MAXIMUM ");
				}
				
			}
			else
			{
				if(d>e)
				{
					printf("D IS MAXIMUM ");
				}
				
				else
				{
					printf("E IS MAXIMUM ");
				}
				
			}
			
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				if(b>e)
				{
						printf("B IS MAXIMUM ");
				}
				else
				{
						printf("E IS MAXIMUM ");
				}
			}
			else
			{
					if(d>e)
				{
					printf("D IS MAXIMUM ");
				}
				
				else
				{
					printf("E IS MAXIMUM ");
				}
			}
		}
		else
		{
			if(c>d)
			{
				if(c>e)
				{
					printf("C IS MAXIMUM ");
				}
				else
				{
					printf("E IS MAXIMUM ");
				}
				
			}
			else
			{
				if(d>e)
				{
					printf("D IS MAXIMUM ");
				}
				
				else
				{
					printf("E IS MAXIMUM ");
				}
				
			}
			
		}
		
	}
}
