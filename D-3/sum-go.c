#include<stdio.h>
main()
{
	int x=1;
	int sum=0;
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	start:
		sum=sum+x;
		x++;
		if(x<=n)
		{  
		    
			goto start;
			
		}
		printf("%d",sum);
}
