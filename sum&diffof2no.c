#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	
    int a,b;
   float p,q;
    scanf("%d%d%f%f",&a,&b,&p,&q);
    printf("%d %d\n%.1f %.1f",a+b,a-b,p+q,p-q);
    return 0;
}
