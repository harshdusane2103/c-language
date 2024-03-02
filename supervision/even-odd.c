#include<stdio.h>
#include<string.h>
main()
{
	FILE*fp1;
	FILE*fp2;
	fp1=fopen("even.txt","w");
		fp2=fopen("odd.txt","w");
		
		int i,j;
		for(i=50;i<=70;i++)
		{
			if(i%2==0)
			{
				printf(" %d\n",i);
				fprintf(fp1,"EVEN :%d",i);
			}
		}
			for(i=50;i<=70;i++)
		{
			if(i%2==1)
			{
				printf("%d \n",i);
				fprintf(fp2,"odd :%d",i);
			}
		}
		

}
