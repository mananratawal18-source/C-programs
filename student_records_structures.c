#include <stdio.h>
struct Student
{
    int rollNo;
    char name[50];
    float marks;
};
void inputStudents(struct Student s[], int n);
void displayStudents(struct Student s[], int n);
int main()
{
    struct Student s[100];
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    inputStudents(s, n);
    displayStudents(s, n);
    return 0;
}
void inputStudents(struct Student s[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s[i].rollNo);
        printf("Name: ");
        scanf(" %[^\n]", s[i].name);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
}
void displayStudents(struct Student s[], int n)
{
    int i;
    printf("\n--- Student Records ---\n");
    for (i = 0; i < n; i++)
    {
        printf("Roll No: %d\tName: %-15s\tMarks: %.2f\n", s[i].rollNo, s[i].name, s[i].marks);
    }
}
