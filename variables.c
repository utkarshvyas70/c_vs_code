#include<stdio.h>
int main(){
    int myNum=15;
    float myFloat=3.2;
    char myLetter='D';
    printf("%d\n",myNum);
    printf("%f\n",myFloat);
    printf("%c\n",myLetter);
    printf("My number is: %d\n",myNum);
    printf("My number is: %d and my letter is %c",myNum,myLetter);
    myNum=10;
    printf("%d\n",myNum);
    printf("%.1f\n",myFloat);
    printf("%.3f\n",myFloat);
    return 0;
}
