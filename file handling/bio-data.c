#include<stdio.h>
#include<string.h>
main()
{
	FILE*fp;
	fp=fopen("bio data .html","w");
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
		

		fprintf(fp,"<html>\n");
		fprintf(fp,"<head>\n");
			fprintf(fp,"<title>MY Bio- Data</title>\n");
	   fprintf(fp,"</head>\n");
	   fprintf(fp,"<body>\n");
	   
	      fprintf(fp,"<h1 {style =align:'center';}>\n");  	fprintf(fp,"MY BASIC INFORMATION",name);  fprintf(fp,"</h1>\n");
	      
	     fprintf(fp,"<p>\n");  	fprintf(fp,"Name :%s\n",name);  fprintf(fp,"</p>\n");
	     
	     fprintf(fp,"<p>\n");  		fprintf(fp,"School:%s\n",school);	  fprintf(fp,"</p>\n");
	     
	     fprintf(fp,"<p>\n");  	fprintf(fp,"Age:%d\n",age);	  fprintf(fp,"</p>\n");
	     
	     fprintf(fp,"<p>\n");  	fprintf(fp,"Std :%d\n",std);	  fprintf(fp,"</p>\n");
	     
	     
	     
		fprintf(fp,"</body>\n");
	
		fprintf(fp,"</html>\n");
}
