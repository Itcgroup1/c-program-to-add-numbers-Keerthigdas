#include <stdio.h>

int main()
{
    int x=9,y=7,z=6;
    if(x>y && x>z)
    {
        printf("%d  is greatest",x);
    }
    else if(y>x && y>z) 
    {
        printf("%d is greatest",y);
    }
    else
    {
        printf("%d is greatest ",z);
    }
    return 0; 
} 