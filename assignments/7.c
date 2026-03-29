#include <stdio.h>

// 1. Define the blueprint for a 'Student'
struct Student
{
    int roll_no;
    char name[50];
    float subject1;
    float subject2;
    float subject3;
    float total;
    float average;
};

int main()
{
    int num_students;

    // Ask the user how many students they want to process
    printf("How many students are in the class? (Max 50): ");
    scanf("%d", &num_students);

    // 2. Create an array of Student structures
    // This creates a list called 'class_list' that can hold up to 50 students.
    struct Student class_list[50];

    // 3. Loop to gather data from the user
    for (int i = 0; i < num_students; i++)
    {
        printf("\n--- Enter details for Student %d ---\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &class_list[i].roll_no);

        // Note: %s reads a single word. We won't use the '&' symbol
        // for the name because arrays (like char name[50]) act as addresses automatically.
        printf("First Name: ");
        scanf("%s", class_list[i].name);

        printf("Marks for Subject 1: ");
        scanf("%f", &class_list[i].subject1);

        printf("Marks for Subject 2: ");
        scanf("%f", &class_list[i].subject2);

        printf("Marks for Subject 3: ");
        scanf("%f", &class_list[i].subject3);

        // Calculate total and average immediately and store them inside the structure
        class_list[i].total = class_list[i].subject1 + class_list[i].subject2 + class_list[i].subject3;
        class_list[i].average = class_list[i].total / 3.0;
    }

    // 4. Loop to display the final results in a table format
    printf("\n=======================================================\n");
    printf("                   STUDENT RESULTS                     \n");
    printf("=======================================================\n");
    printf("Roll No\tName\t\tTotal\tAverage\n");
    printf("-------------------------------------------------------\n");

    for (int i = 0; i < num_students; i++)
    {
        // \t creates a tab space for neat columns.
        // %.2f prints floating-point numbers with exactly 2 decimal places.
        printf("%d\t%s\t\t%.2f\t%.2f\n",
               class_list[i].roll_no,
               class_list[i].name,
               class_list[i].total,
               class_list[i].average);
    }

    printf("=======================================================\n");

    return 0;
}