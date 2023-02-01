#include <stdio.h>

int main()
{
    int i=1;
    while(i<=5)
    {
        int a=5;
        while(a>=i)
        {
            printf("%d ",a);
            a=a-1;
        }
        printf("\n");
        i=i+1;
    }
    return 0;
}

O/P:

5 4 3 2 1
5 4 3 2
5 4 3
5 4
5
