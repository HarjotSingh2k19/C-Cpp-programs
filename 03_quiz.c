#include<stdio.h>

int main(){

    int marks;
    printf("enter your marks to obtain your grades \n");
    scanf("%d", &marks);

    if(marks>=90){
        printf("your grade is A\n");
    }

    else if (marks>=80 && marks<90){
        printf("your grade is B");
    }

     else if (marks>=70 && marks<80){
        printf("your grade is C");
    }

     else if (marks>=60 && marks<70){
        printf("your grade is D");
    }

    else{
        printf("sorry, you have failed");
    }

    return 0;
}