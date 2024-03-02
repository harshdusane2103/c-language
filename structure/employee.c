#include<stdio.h>
#include<string.h>
struct  employee
{
	int id,age,experience;
	char name[50],role[20],city[20],company_name[50];
};

int main()
{
   char name[50],role[20],city[20],company_name[50];
   struct employee emp[5];
   int i;
   for(i=0;i<3;i++)
   { 
   printf("Enter your id :\n");
   scanf("%d",&emp[i].id);
   
   printf("Enter your age  :\n");
   scanf("%d",&emp[i].age);
   
	printf("Enter your experience  :\n");
	   scanf("%d",&emp[i].experience);
	   
	printf("Enter your name :\n");
	   scanf(" %[^\n]s",&name);
	   
	printf("Enter your role:\n");
	   scanf(" %[^\n]s",&role);
	   
	printf("Enter your city :\n");
	   scanf(" %[^\n]s",&city);
	   
	printf("Enter your company_name :\n");
	   scanf(" %[^\n]s",&company_name);
	   
	   
	   strcpy(emp[i].name,name);
	   strcpy(emp[i].role,role);
	   strcpy(emp[i].name,name);
	   strcpy(emp[i].name,name);
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	      printf("\n");
   }

   
   
   for(i=0;i<3;i++)
	   {
	   printf("Name :%s\n",emp[i].name);
	     printf("ID :%d\n",emp[i].id);
	       printf("Age :%d\n",emp[i].age);
	         printf("Standard :%d\n",emp[i].experience);
	           printf("course :%s\n",emp[i].role);
	             printf("School :%s\n",emp[i].company_name);
	               printf(" City:%s\n",emp[i].city);
	    printf("\n");
	   }
	   
   	return 0;
}
