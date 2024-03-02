	#include<stdio.h>
	main()
	{
		
	
	
	FILE*fp;
	fp=fopen("ptr.txt","w");
	
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
	int *ptr1=&a;
	int *ptr2=&b;
	int *ptr3=&c;
	int *ptr4=&d;
	int *ptr5=&e;
	
	fprintf(fp," A :%d\n",*ptr1);
	fprintf(fp," B :%d\n",*ptr2);
	fprintf(fp," C :%d\n",*ptr3);
	fprintf(fp," D :%d\n",*ptr4);
	fprintf(fp," E  :%d\n",*ptr5);
}
