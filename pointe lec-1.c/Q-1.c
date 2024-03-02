#include<stdio.h>
main()
{
	int n;
	printf("enter the size of array :");
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	int *ptr;
	
	
	 

	for(i=0;i<n;i++)
	{
		ptr=&a[i];
		printf("%d\n",*ptr*a[i]);
		
	}
}
