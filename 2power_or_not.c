#include<stdio.h>
int data;
void main(){
    printf("enter data:");
    scanf("%d",&data);
    {
        if((data&(data-1))==0)
            printf("2 power");
        else
            printf("Not 2 power");
    }

}
