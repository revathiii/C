#include<stdio.h>
int data;
int main(){
    printf("Enter data:");
    scanf("%d",&data);
    {

    if((data&1)==0)
        printf("EVEN");
    else
        printf("ODD");

    }

}

//ENTER DATA:6
//EVEN

//ENTER DATA:9
//ODD
