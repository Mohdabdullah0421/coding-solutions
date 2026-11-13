#include<stdio.h>
void main ()
{
int M[5],i,max;
printf("enter 5 values");
for(i=0;i<5;i++)
scanf("%d",&M[i]);
for(i=0;i<5;i++)
{
if(M[i]>max)
{
    max=M[i];
}
}
printf("max=%d",max);
}
