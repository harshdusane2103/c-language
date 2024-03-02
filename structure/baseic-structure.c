#include<stdio.h>
#include<string.h>
struct student
{
	int id,age,standard;
	char name[50],course[20],city[20],school[50];
};

main()
{
   char name[50],course[20],city[20],school[50];
   struct student s;
   
   printf("Enter your id :");
   scanf("%d",&s.id);
   
   printf("Enter your age  :");
   scanf("%d",&s.age);
   
	printf("Enter your standard  :");
	   scanf("%d",&s.standard);
	   
	printf("Enter your name :");
	   scanf(" %[^\n]s",&name);
	   
	printf("Enter your course / divison :");
	   scanf(" %[^\n]s",&course);
	printf("Enter your city :");
	   scanf(" %[^\n]s",&city);
	printf("Enter your school :");
	   scanf(" %[^\n]s",&school);
   
	   strcpy(s.name,name);
	   strcpy(s.course,course);
	   strcpy(s.city,city);
	   strcpy(s.school,school);
   printf("Name :%s\n",s.name);
     printf("ID :%d\n",s.id);
       printf("Age :%d\n",s.age);
         printf("Standard :%d\n",s.standard);
           printf("course :%s\n",s.course);
             printf("School :%s\n",s.school);
               printf(" City:%s\n",s.city);

   
   	
}
