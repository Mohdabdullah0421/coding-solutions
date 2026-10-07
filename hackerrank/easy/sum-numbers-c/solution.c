#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int x,y,sum,diff;
    float a,b,add,sub;
    
    scanf ("%d %d",&x,&y);
    scanf ("%f %f",&a,&b);
    
    sum = x+y;
    diff = x-y;
    
    add = a+b;
    sub = a-b;
    
    printf ("%d %d\n", sum,diff);
    printf ("%.1f %.1f\n",add,sub);
    
    return 0;
}

