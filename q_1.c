#include<stdio.h>
void main()
{
int i,j,k,n;
for(i=0;i<=5;i++)
{
for(k=0;k<=i-1;k++)
{ 
printf(" ");
}
for(j=0;j<5-i;j++)
{
printf("*");
}
printf("\n");
}
}
