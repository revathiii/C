#include<stdio.h>

void main(){
    int n;
    int bit;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter bit:");
    scanf("%d",&bit);
    {
     if((n&(1<<bit))==0)

        printf("Not Set");

     else

        printf("Set");

    }


}

// Output :
Enter n:16
Enter bit:3
Not Set
