#include<stdio.h>

main()
{
	int a,b;
	printf("Enter the A : ");
	scanf("%d",&a) ;
	printf("Enter the B : ");
	scanf("%d",&b);
    int *ptr1=&a;
    int *ptr2=&b;
    int *ptr3;
    ptr3 = ptr1;
    ptr1 = ptr2;
    ptr2 = ptr3;
    printf("A:%d\n",*ptr1);
    printf("B:%d",*ptr2);
    
}
