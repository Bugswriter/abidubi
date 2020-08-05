#include<stdio.h>

/** AbiDubbi
Free Calci Software Source Code
written by bugswriter
*/

void welcome(){
  printf("== AbiDubbi ==");
  printf("Free, Open Source, Community made Calci software\n");
  printf("Feel free to donate us - abidubbi.org/donate\n");
  printf("If you face any problem ask in our forum and community groups");
}

// Addition function
int add(int x, int y){
  return x+y;
}

// Subtraction function
int sub(int x, int y){
  return x-y;
}

// Multiplication function
int mul(int x, int y){
  return x*y;
}

// Division function
int div(int x, int y){
  return x/y;
}

// Main function
int main(){
  int choice, num1, num2;
  welcome();
  printf("Enter number 1: ");
  scanf("%d", &num1);
  printf("Enter number 2: ");
  scanf("%d", &num2);
  printf("Select your operation: \n");
  printf("Enter 1 for Addition\n");
  printf("Enter 2 for Subtraction\n");
  printf("Enter 3 for Multiplication\n");
  printf("Enter 4 for Division\n");
  printf("Enter your choice: ");
  scanf("%d", &choice);
  
  if(choice == 1){
    printf("Ans: %d", add(num1, num2));
  }else if(choice == 2){
    printf("Ans: %d", sub(num1, num2));
  }else if(choice == 3){
    printf("Ans: %d", mul(num1, num2));
  }else if(choice == 4){
    printf("Ans: %d", div(num1, num2));
  }else{
    printf("You have entered incorrect choice");
  }
  return 0;
}
