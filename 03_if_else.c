#include<stdio.h>

int main(){
    int age;
    printf("enter your age \n");
    scanf("%d", &age);

    if(age>=90){
        printf("you are above 90, you cannot drive \n");
    }
    if(age<=18){
        printf("drive remote control car\n");
    }
    else{
        printf("you can drive \n");
    }

    if(age==50){
        printf("half century \n");
    }

    return 0;
}