#include<stdio.h>
int main()
{
    int i,n,flag;
    printf("Enter n:");
    scanf("%d",&n);
    flag=1;
    for(i=2;i<n/2;i=i+1)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    if(1==flag)
        printf("PRIME");
    else
        printf("NOT PRIME");
}

O/P:

Enter n:7
PRIME

Enter n:44
NOT PRIME
