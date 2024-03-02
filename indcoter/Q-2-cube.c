#include<stdio.h>
#include<stdio.h>
void cube(int *ptr)
{
	int n;
	printf("enter the size of array :");
	scanf("%d",&n);
	int a[n][n];
	int i,j;
	
    for(i=0;i<n;i++)
    {
    		for(j=0;j<n;j++)
		{
			printf("a[%d][%d]:",i,j);
			scanf("%d ",&a[i][j]);
		}
	}

	
	
	    for(i=0;i<n;i++)
    {
    		for(j=0;j<n;j++)
		{
		   ptr=&a[i][j];
		   printf("%d \n",*ptr*a[i][j]*a[i][j]);
		}
	}


}
int main()
{
	int ptr;
	cube(ptr);
	return 0;
}
