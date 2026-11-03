#include <stdio.h>

void insertSub(char str[], char sub[], int pos, char res[]);
void deleteChars(char str[], int pos, int n, char res[]);

int main() 
{
    char str[100];
    char sub[50];
    char res[150];
    int pos;
    int n;

    printf("Enter main string: ");
    scanf(" %[^\n]", str);
    printf("Enter sub-string to insert: ");
    scanf(" %[^\n]", sub);
    printf("Enter position to insert (0-indexed): ");
    scanf("%d", &pos);
    insertSub(str, sub, pos, res);
    printf("After Insertion: %s\n\n", res);
    printf("Enter position to delete from (0-indexed): ");
    scanf("%d", &pos);
    printf("Enter number of characters to delete: ");
    scanf("%d", &n);
    deleteChars(str, pos, n, res);
    printf("After Deletion: %s\n", res);
    return 0;
}

void insertSub(char str[], char sub[], int pos, char res[]) 
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < pos && str[i] != '\0') {
        res[k] = str[i];
        i++;
        k++;
    }
    while (sub[j] != '\0') {
        res[k] = sub[j];
        j++;
        k++;
    }
    while (str[i] != '\0') {
        res[k] = str[i];
        i++;
        k++;
    }
    res[k] = '\0';
}

void deleteChars(char str[], int pos, int n, char res[]) 
{
    int i = 0;
    int k = 0;
    while (i < pos && str[i] != '\0') {
        res[k] = str[i];
        i++;
        k++;
    }
    i = i + n;
    while (str[i] != '\0') {
        res[k] = str[i];
        i++;
        k++;
    }
    res[k] = '\0';
}
