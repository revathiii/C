#include<stdio.h>
int n;
void main(){
    printf("Enter n:");
    scanf("%d",&n);
    {

        if(n>>15)
            printf("Negative Number");
        else
            printf("Positive Number");
    }
}


//Enter n:10
//Positive Number

//Enter n:-1
//Negative Number
