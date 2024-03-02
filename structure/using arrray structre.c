#include<stdio.h>
#include<string.h>
struct student
{
	int id,age,standard;
	char name[50],course[20],city[20],school[50];
};

int main()
{
   char name[50],course[20],city[20],school[50];
   struct student s[3];
   int i;
   for(i=0;i<3;i++)
   {
   printf("Enter your id :\n");
   scanf("%d",&s[i].id); 
   
   printf("Enter your age  :\n");
   scanf("%d",&s[i].age);
   
	printf("Enter your standard  :\n");
	   scanf("%d",&s[i].standard);
	   
	printf("Enter your name :\n");
	   scanf(  "[^\n]%s",&name);
	   
	printf("Enter your course / divison :\n");
	   scanf(  "[^\n]%s",&course);
	   
	printf("Enter your city :\n");
	   scanf(  "[^\n]%s",&city);
	   
	printf("Enter your school :\n");
	   scanf( "[^\n]%s",&school);
	   
	   strcpy(s[i].name,name);
	      strcpy(s[i].course,course);
	         strcpy(s[i].city,city);
	            strcpy(s[i].school,school);
	      printf("\n");
   }

   
   
   for(i=0;i<3;i++)
	   {
	   printf("Name :%s\n",s[i].name);
	     printf("ID :%d\n",s[i].id);
	       printf("Age :%d\n",s[i].age);
	         printf("Standard :%d\n",s[i].standard);
	           printf("course :%s\n",s[i].course);
	             printf("School :%s\n",s[i].school);
	               printf(" City:%s\n",s[i].city);
	    printf("\n");
	   }
	   
   	return 0;
}
