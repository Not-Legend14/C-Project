#include <stdio.h>
#include<math.h>
int main() 
{
 float a,b;
 char ch;
 do{
 printf("Enter first number : ");
 scanf("%f",&a);
 printf("Enter second number : ");
 scanf("%f",&b);
printf("Enter + for addition");
printf("Enter - for subtraction");
printf("Enter / for division");
printf("Enter * for multiplication");
printf("Enter %% for remainder");
printf("Enter ^ to find power");
 printf("Enter operator : ");
 char o;
 scanf(" %c", &o);
 float sum=a+b;
 float dif=a-b;
 float prod=a*b;
 float div=a/b;
 float quo=fmodf(a, b);
 float pow=1.00f;
 while(b!=0)
 {
  pow*=a;
  --b;
 }
 switch(o)
 {
  case '+':
  printf("Sum of two numbers is : %.2f",sum);
  break;
  case '-':
  printf("Difference of two numbers is :%.2f ",dif);
  break;
  case '*':
  printf("Product of two numbers is : %.2f",prod);
  break;
  case '/':
  printf("Division of two numbers is : %.2f",div);
  break;
  case '%':
  printf("Remainder of two numbers is : %.2f",quo);
  break;
   case '^':
  printf("a to the power b : %.2f",pow);
  break;
  default :
  printf("Enter a valid operator");
  break;
 }
 printf("\nCalculate again? (Y/N) ");
 scanf(" %c", &ch);
 if(ch=='N'||ch=='n')
 printf("Terminated  \n");
}
 while(ch=='Y'||ch=='y');
}