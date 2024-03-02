#include<stdio.h>

main()
{
	int   a, b ,c ;
	printf("Enter the A : ");
	scanf("%d",&a) ;
	printf("Enter the B : \n");
	scanf("%d",&b);
    int *ptr1=&a;
    int *ptr2=&b;
    int *ptr3=&c;
    ptr3 = ptr1;
    ptr1 = ptr2;
    ptr2 = ptr3;
    printf("A:%d",*ptr1);
    printf("B:%d",*ptr2);
    
}
