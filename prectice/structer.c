#include<stdio.h>
#include<string.h>
struct student
{
	char name[50];
	int age,rn,std;
}
main()
{
	FILE *fp;
	fp=fopen("data.txt","w");
		int i;
	struct student s1[i];

	for(i=0;i<3;i++)
	{
	
	printf("enter your name :");
    gets(s1[i].name);
	printf("enter your age:");
	scanf("%d",&s1[i].age);
	printf("enter your roll-no:");
	scanf("%d",&s1[i].rn);
	printf("enter your stander:");
	scanf("%d",&s1[i].std);
	
	}
	
    for(i=0;i<3;i++)
    {
	    printf("NAME: %s \n",s1[i].name);
		printf("AGE :%d \n",s1[i].age);
		printf("Roll-No:%d \n",s1[i].rn);
		printf("Stander:%d \n",s1[i].std);
    }
	    
	for(i=0;i<3;i++)
	{
		
			fprintf(fp,"NAME: %s \n",s1[i].name);
			fprintf(fp,"AGE :%d \n",s1[i].age);
			fprintf(fp,"Roll-No:%d \n",s1[i].rn);
			fprintf(fp,"Stander:%d \n",s1[i].std);
    }
	
}
