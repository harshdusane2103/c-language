#include<stdio.h>
main()
{
	 	FILE*fp;
	fp=fopen("ladder.txt","w");
	
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
	
	fprintf(fp," A :%d\n",a);
	fprintf(fp," B :%d\n",b);
	fprintf(fp," C :%d\n",c);
	fprintf(fp," D :%d\n",d);
	fprintf(fp," E  :%d\n",e);
	
	
	
	if(a>b&&a>e&&a>c&&a>d)
	{
		printf("A IS MAXIMUM");
		fprintf(fp,"A IS MAXIMUM");
	}
	else if(b>c&b>c&&b>d&&b>e)
	{
		printf("B IS MAXIMUM");
			fprintf(fp,"B IS MAXIMUM");
	}
	else if(c>b&&c>a&&c>d&&c>e)
	{
		printf("C IS MAXIMUM");
			fprintf(fp,"C IS MAXIMUM");
	}
	else if(d>b&&d>a&&d>c&&d>e)
	{
		printf("D IS MAXIMUM");
			fprintf(fp,"D IS MAXIMUM");
	}
	else if(e>b&&e>a&&e>c&&e>d)
	{
		printf("E IS MAXIMUM");
		fprintf(fp,"E IS MAXIMUM");
	}
}
