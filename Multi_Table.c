#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter n:");
    scanf("%d",&n);
    i=1;
    while(i<=10)
    {
        printf("%d * %d = %d\n",i,n,i*n);
        i=i+1;
    }
}


O/P:
Enter n:10
1 * 10 = 10
2 * 10 = 20
3 * 10 = 30
4 * 10 = 40
5 * 10 = 50
6 * 10 = 60
7 * 10 = 70
8 * 10 = 80
9 * 10 = 90
10 * 10 = 100
