#include<stdio.h> 
#include<stdlib.h> 
int main ()
{
int n, m, p, q;

int arr1[m][n];
int arr2[p][q];
int arr3[10][10]; int choice;
int i,j,k;
printf("enter the elements of matrix 1\n"); for(i=1;i<=m;i++)
{
for(j=1;j<=n;j++)
{
scanf("%d",&arr1[i][j]);
}
 
}
printf("enter the elements of matrix 2\n"); for(i=1;i<=p;i++)
{
for(j=1;j<=q;j++)
{
scanf("%d",&arr2[i][j]);
}
}
printf("\n*****MENU***\n"); printf("1. ADDITION\n"); printf("2. SUBTRACTION\n");

printf("3. MULTIPLICATION\n");
printf("4. TRANSPOSE\n"); printf("5. UPPER TRIANGLE\n"); printf("6. LOWER TRIANGLE\n");
printf("7. exit\n"); printf("*******\n");

scanf("%d",&choice); switch(choice)
{
case 1:
{
if(m==p&&n==q)
{
printf("\nThe sum of the matrices are :"); for(i=1;i<=m;i++)
{
printf("\n"); for(j=1;j<=n;j++)
{
arr3[i][j]=arr1[i][j]+arr2[i][j];
printf(" %d",arr3[i][j]);
}
}
}
}
break;
 
case 2:
{
if(m==p&&n==q)
{

{
printf("\n"); for(j=1;j<=n;j++)
{


}
}
}
}
break; case 3:
{
if(m==q&&n==p)
{
for(i=1;i<=m;i++)
{
for(j=1;j<=n;j++) arr3[i][j]=0;
}
for(i=1;i<=m;i++)
{
for(j=1;j<=n;j++)
{
for(k=1;k<=n;k++)
{


{
printf("\n"); for(j=1;j<=n;j++) printf(" %d",arr3[i][j]);
}
}
break; case 4:
{
printf("\n MATRIX A :"); for(i=1;i<=m;i++)
{

printf("\n"); for(j=1;j<=n;j++) printf("%d",arr1[j][i]);
}
printf("\n MATRIX B :"); for(i=1;i<=p;i++)
{
printf("\n"); for(j=1;j<=q;j++) printf("%d",arr2[j][i]);
}
}
break; case 5:
{
printf("Upper Triangle Matrix\n"); for(i=1;i<=m;i++)
{
for(j=1;j<=n;j++)
{
if(i>j)
{
printf(" ");
}
else printf("%d",arr1[i][j]);
}
 
printf("\n");
}
}
break; case 6:
{
printf("Lower Triangle Matrix\n"); for(i=1;i<=m;i++)
{
for(j=1;j<=n;j++)
{
if(i<j)
{


}
printf("\n");
}
}
break; case 7: ;
}
return 0;
}

