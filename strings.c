#include<stdio.h>
int main(){
    char greetings[]="Hello World!";
    greetings[0]='J';
    printf("%s\n",greetings);
    return 0;
}

int main(){
    char CarName[]="Volvo";
    int i;
    for(i=0;i<5;++i) {
        printf("%c\n",CarName[i]);
        
    }
    return 0;
}

int main() {
  char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
  char greetings2[] = "Hello World!";
  
  printf("%s\n", greetings);
  printf("%s\n", greetings2);
  
  return 0;
}

int main(){
    char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
char greetings2[] = "Hello World!";

printf("%lu\n", sizeof(greetings));   // Outputs 13
printf("%lu\n", sizeof(greetings2)); 
return 0;
}

#include<string.h>
int main(){
    char alphabet[50]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char str2[]="abcdefghi";
    printf("%d\n",strlen(alphabet));
    printf("%d\n",sizeof(alphabet));
    strcat(alphabet,str2);
    printf("%s",alphabet);
    return 0;
}