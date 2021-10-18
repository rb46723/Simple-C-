#include <stdio.h>
#include <stdlib.h>
int length(char *p)
{
    int count = 0;
    while (*p != '\0')
    {
        count++;
        p++;
    }
    return count;
}
const char *concat(char str1[], char str2[])
{
    int i = 0, j = 0;
    while (str1[i] != '\0')
        i++;
    while (str2[j] != '\0')
    {
        str1[i] = str2[j];
        j++;
        i++;
    }
    str1[i] = '\0';
    return str1;
}
const char *reverse(char str[])
{
    char temp;
    int i, len;
    len = length(str) - 1;
    for (i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len];
        str[len--] = temp;
    }
    return str;
}
const char *copy(char s1[], char s2[])
{
    char i;
    for (i = 0; s1[i] != '\0'; ++i)
    {
        s2[i] = s1[i];
    }
    s2[i] = '\0';
    return s2;
}
int main()
{
    int ch;
    printf("** MENU **\n");
    printf("1. Length\n");
    printf("2. Concatenation\n");
    printf("3. Reverse\n");
    printf("4. Copy\n");
    printf("5. exit\n");
    printf("****\n");
    printf("\nEnter your choice: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
    {
        char string6[25];
        printf("enter a string : ");
        scanf("%s", string6);
        int l;
        l = length(string6);
        printf("length of string %d", l);
    }
    break;
    case 2:
    {
        char string1[25];
        printf("enter the first string\n");
        scanf("%s", string1);
        char string2[25];
        printf("enter the second string\n");
        scanf("%s", string2);
        concat(string1, string2);
        printf("string after concatenation : %s", string1);
    }
    break;
    case 3:
    {
        char string3[25];
        printf("enter the string\n");
        scanf("%s", string3);
        reverse(string3);
        printf("reverse of the string is : %s", string3);
    }
    break;
    case 4:
    {
        char string4[40], string5[40];
        printf("enter the first string\n");

        scanf("%s", string4);
        printf("enter the second string\n");
        scanf("%s", string5);
        copy(string4, string5);
        printf("after copying string : %s", string5);
    }
    break;
    case 5:
        exit(0);
    default:
        printf("enter a valid choice");
    }
    return 0;
}

