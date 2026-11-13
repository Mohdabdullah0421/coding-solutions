#include<stdio.h>
void main ()
{
int M[5],i,s=1;
printf("enter 5 values");
for(i=0;i<5;i++)
{
scanf("%d",&M[i]);
}
for(i=0;i<5;i++)
{
s=s*M[i];
}
printf("product=%d",s);
}
