#include <stdio.h>

int findLength(char str[]);
void reverseString(char str[], char rev[]);
int isPalindrome(char str[]);

int main()
{
    char str[100];
    char rev[100];
    int len;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    len = findLength(str);
    printf("Length of the string: %d\n", len);

    reverseString(str, rev);
    printf("Reversed string: %s\n", rev);

    if (isPalindrome(str))
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}

int findLength(char str[])
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return len;
}

void reverseString(char str[], char rev[])
{
    int len = findLength(str);
    int i;

    for (i = 0; i < len; i++)
    {
        rev[i] = str[len - 1 - i];
    }
    rev[len] = '\0';
}

int isPalindrome(char str[])
{
    int start = 0;
    int end = findLength(str) - 1;

    while (start < end)
    {
        if (str[start] != str[end])
        {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}
