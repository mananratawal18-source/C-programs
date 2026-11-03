#include <stdio.h>
void writeRecords(char fn[], char mode[]);
void displayFile(char fn[]);
int main()
{
    char fn[] = "students.txt";

    printf("--- Write Records ---\n");
    writeRecords(fn, "w");

    printf("\n--- File Content ---\n");
    displayFile(fn);

    printf("\n--- Append Records ---\n");
    writeRecords(fn, "a");

    printf("\n--- Updated File Content ---\n");
    displayFile(fn);

    return 0;
}

void writeRecords(char fn[], char mode[])
{
    FILE *fp = fopen(fn, mode);
    int n, r;
    char name[50];
    float m;

    if (!fp)
        return;

    printf("How many records? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter RollNo Name Marks: ");
        scanf("%d %s %f", &r, name, &m);
        fprintf(fp, "%d %s %.2f\n", r, name, m);
    }
    fclose(fp);
}

void displayFile(char fn[])
{
    FILE *fp = fopen(fn, "r");
    int r;
    char name[50];
    float m;

    if (!fp)
        return;

    printf("RollNo\tName\tMarks\n");
    while (fscanf(fp, "%d %s %f", &r, name, &m) == 3)
    {
        printf("%d\t%s\t%.2f\n", r, name, m);
    }
    fclose(fp);
}
