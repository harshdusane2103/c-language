#include<stdio.h>
void add(int *a)
{
	*a=*a-1;
}
main()
{
	int a=1000;
    printf("%d \n",a);
    add(&a);
	printf("Amount :%d",a);

}
