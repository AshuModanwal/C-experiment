#include<stdio.h>
int main(){
    int year;
    printf("Enter Year: ");
    scanf("%d",&year);
    if(year%400 == 0 )
    {
        printf("The entered year %d is leap year.", year);
    }
    else if(year%4 == 0 && year%100!=0){
        printf("the enetered year %d is leap year.",year);

    }
    else{
        printf("the entered year %d is not leap year",year);
    }
}