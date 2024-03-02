#include<stdio.h>
#include<string.h>
main()
{
	FILE*fp;
	fp=fopen("new.txt","w");
	char name[50] ,school[50];
	int age ,std;
	printf("Enter your name :");
	gets(name);
	printf("Enter your school name:");
	gets(school);
		printf("Enter your age :");
		scanf("%d",&age);
		printf("Enter your standard :");
		scanf("%d",&std);
		
		printf("Name :%s \n",name);
		printf(" School:%s\n",school);
		printf("age :%d\n",age);
		printf("Standard :%d\n",std);
	
		fprintf(fp,"Name :%s\n",name);
		fprintf(fp,"School:%s\n",school);
		fprintf(fp,"Age:%d\n",age);
		fprintf(fp,"Std :%d\n",std);
	
	
}
