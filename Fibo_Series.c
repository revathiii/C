#include<stdio.h>
int main()
{
    int prev,curr,next,n,i;
    prev=curr=1;
    printf("Enter Terms:");
    scanf("%d",&n);
    printf("%d %d ",prev,curr);
    i=1;
    while(i<=n-2)
    {
        next=prev+curr;
        printf("%d ",next);
        prev=curr;
        curr=next;
        i=i+1;
    }
}
