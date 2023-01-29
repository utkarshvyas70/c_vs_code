#include<stdio.h>
int main(){
    int day =6;
    switch (day)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tueday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thrusday");
        break;
    case 5:
        printf("Friday");
        break;
    
    default:
        printf("Input valid input");
        break;
    }
}