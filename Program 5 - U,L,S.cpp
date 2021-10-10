#include <stdio.h> 
int main() {
int upper = 0, lower = 0, symbol=0; 
char c;

// open file - text.txt
// the second parameter "r" denotes we are only reading the content of the file
// we cannot manipulate the content of the file 
FILE* fp = fopen("text.txt", "r");

// if file doesn't open due to some problem, then terminate the program 
if (fp == NULL)
return 0;

while (1)
{

// fgets() reads each character of the file 
c = fgetc(fp);

// break the loop on reaching the EOF - End of File character 
if (c == EOF)
break;

// if c is uppercase alphabet, increment upper

// if c is lowercase alphabet, increment lower 

fclose(fp);

printf("Uppercase: %d\nLowercase: %d\nsymbol: %d\n", upper, lower,symbol); return 0;
}
