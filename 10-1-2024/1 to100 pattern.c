#include<stdio.h>
main()
{
	int i,j ,k=1,l;
	for(i=10;i>=1;i--)
	{ 
			for(l=10;l>i;l--)
			{
				printf("-");
			}
		for(j=1;j<=i;j++)
		{
			printf(" %d",k);
			k++;
		}
		printf("\n");
	}
		for(i=1;i<=10;i++)
	{ 
			for(l=10;l>i;l--)
			{
				printf("-");
			}
		for(j=1;j<=i;j++)
		{
			printf(" %d",k);
			k++;
		}
		printf("\n");
	}
}
