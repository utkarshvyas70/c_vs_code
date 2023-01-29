#include<stdio.h>
// int main(){
//     int i;
//     for (i=0;i<5;i++){
//     printf("%d\n",i);
//     }
// }

// nested loop
int main(){
    int i,j;
    for (i=1;i<=2;++i){
        printf("Outer: %d\n",i);

        for (j=i;j<=3;++j){
            printf("Inner: %d\n",j);
        }
    }
    return 0;
}