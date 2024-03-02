#include<stdio.h>
void dec(int *a)
{
	*a=*a-1;
	*a--;
}
 int main()
 {
 	int a;
 	printf("Enter the a :");
 	scanf("%d",&a);
 	dec(a);
 	int *ptr=&a;
	 printf("%d",ptr);
	 return 0;
	 
	  }
