#include<stdio.h>

int main(){
    int num1,num2,num3,num4;

    printf("enter your first number \n");
    scanf("%d",&num1);

    
    printf("enter your second number \n");
    scanf("%d",&num2);

    
    printf("enter your third number \n");
    scanf("%d",&num3);

    
    printf("enter your fourth number \n");
    scanf("%d",&num4);
    

   if (num1>num2 && num1>num3 &&num1>num4){
       printf("largest integer is %d \n", num1);
   }
   
   if (num2>num1 && num2>num3 &&num2>num4){
       printf("largest integer is %d \n", num2);
   }

   if (num3>num2 && num3>num2 &&num3>num4){
       printf("largest integer is %d \n", num3);
   }

   if (num4>num2 && num4>num3 &&num4>num1){
       printf("largest integer is %d \n", num4);
   }
   
       
   return 0;
   
}