#include<stdio.h>

void main(){

char chois;
int number1,number2,result;

printf("Enter Your Chois (+,-,*,/,) : ");
scanf("%c",&chois);

printf("Enter number 1 : ");
scanf("%d",&number1);

printf("Enter number 2 : ");
scanf("%d",&number2);

switch(chois){

case '+':
    result=number1+number2;
    printf("Result : %d",result);
    break;


case '-':
    result=number1-number2;
    printf("Result : %d",result);
    break;


case '*':
    result=number1*number2;
    printf("Result : %d",result);
    break;


case '/':
    result=number1/number2;
    printf("Result : %d",result);
    break;
}

}
