#include <stdio.h>
#include<string.h>


struct Student 
{
    int roll_no;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};

int main() 
{
    
    
    struct Student st[5];

    int i;
    
    for (i = 0; i < 5; i++) 
	{
        printf("Enter details for Student %d:\n", i + 1);
        
       
        printf("Roll No: ");
        scanf("%d", &st[i].roll_no);

        printf("Name: ");
        scanf("%s", st[i].name); 

     
        printf("Chemistry Marks (out of 100): ");
        scanf("%d", &st[i].chem_marks);

        printf("Mathematics Marks (out of 100): ");
        scanf("%d", &st[i].maths_marks);

        printf("Physics Marks (out of 100): ");
        scanf("%d", &st[i].phy_marks);

        printf("\n");
    }

 
    printf("Mark Sheets:\n");
    for (i = 0; i < 5; i++) 
	{
        float total= st[i].chem_marks + st[i].maths_marks + st[i].phy_marks;
        float percentage = (total/ 300) * 100;

        printf("\nStudent %d - Roll No: %d\n", i + 1, st[i].roll_no);
        printf("Name: %s\n", st[i].name);
        printf("Chemistry Marks: %d\n", st[i].chem_marks);
        printf("Mathematics Marks: %d\n", st[i].maths_marks);
        printf("Physics Marks: %d\n", st[i].phy_marks);
        printf("Percentage: %.2f%%\n", percentage);
    }

    return 0;
}
