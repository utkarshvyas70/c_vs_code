#include<stdio.h>
int main() {
    int i;
    for (i=0;i<10;i++){
        if (i==4){
            break;
        }
        printf("%d\n",i);

    }

    int j;
    for (i=0;i<10;i++){
        if(i==4){
            continue;
        }
        printf("%d\n",i);
    }
}