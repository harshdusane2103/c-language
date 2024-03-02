#include<stdio.h>
#include<string.h>
 struct std
 
{
	int age;
	char name[50];
	
}

main()
{
	char name[50];
	struct std s;
	printf("Enter your name:");
	gets(s.name);
	printf("Enter your age :");
	scanf("%d",&s.age);
	
	printf("Name:%s",s.name);
	printf("Age :%d",s.age);
	
}
