#include <stdio.h> 
#include<stdlib.h> 
int length(char *p)
{
int count = 0; while (*p != '\0')
{
count++; p++;
}
return count;
}
const char* concat(char str1[] , char str2[])
{
int i=0,j=0; while(str1[i]!='\0') i++;
while(str2[j]!='\0')
{
str1[i]=str2[j]; j++;
i++;
}
str1[i]='\0';
return str1;
}
const char* reverse(char str[])
{
char temp; int i,len;
len=length(str)-1; for(i=0;i<len/2;i++)
{

}
return str;
}
const char* copy(char s1[],char s2[])
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

switch(ch)
{
case 1:
{
char string6[25]; printf("enter a string : "); scanf("%s",string6);
int l; l=length(string6);
printf("length of string %d",l);
}
break; case 2:
{

}
break; case 3:
{
char string3[25]; printf("enter the string\n"); scanf("%s",string3); reverse(string3);
printf("reverse of the string is : %s",string3);
}
break; case 4:
{

 
scanf("%s",string4);
printf("enter the second string\n"); scanf("%s",string5); copy(string4,string5);
printf("after copying string : %s",string5);
}
break; case 5:
exit(0);
default: printf("enter a valid choice");
}
return 0;
}

