#include<stdio.h>

int main(){
    // 97-122 = lowercase a-z (ASCII values)
    char ch;
    printf("enter the character \n");
    scanf("%c", &ch);

    if(ch<=122 && ch>=97){
        printf("it is lowercase \n");

    }

    else{
        printf("it is not lowercase \n");
    }
    return 0;
}