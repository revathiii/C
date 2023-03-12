#include<stdio.h>
int n;
void main(){
    printf("enter n:");
    scanf("%d",&n);
    {
        if(n&&(n&(n-1))==0)
            printf("2 power");
        else
            printf("Not 2 power");
    }

}

