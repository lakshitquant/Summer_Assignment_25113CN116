#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

struct Student s[100];
int n = 0;

// Function to add students
void addStudent()
{
    int i;

    printf("How many students do you want to add? ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
   printf("\nEnter Student %d Details\n", i + 1);

  printf("Roll Number: ");
   scanf("%d", &s[i].roll);

  printf("Name: ");
    scanf ("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
}

// Function to display students
void displayStudents()
{
    int i;

    if(n == 0)
    {
        printf("\nNo student records available.\n");
        return;
    }

    printf("\n----- Student Records -----\n");

    for(i = 0; i < n; i++)
    {
        printf("\nRoll  : %d", s[i].roll);
        printf("\nName  : %s", s[i].name);
        printf("\nMarks : %.2f\n", s[i].marks);
    }
}

// Function to search student
void searchStudent()
{
    int roll, i, found = 0;

    printf("Enter Roll Number to Search: ");
    scanf("%d", &roll);

    for(i = 0; i < n; i++)
    {
        if(s[i].roll == roll)
        {
            printf("\nStudent Found\n");
            printf("Roll  : %d\n", s[i].roll);
            printf("Name  : %s\n", s[i].name);
            printf("Marks : %.2f\n", s[i].marks);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("\nStudent Not Found.\n");
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n===== Student Management System =====\n");
        printf("1. Add Students\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}