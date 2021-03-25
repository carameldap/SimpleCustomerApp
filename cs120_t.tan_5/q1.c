/**************************************************************************
filename     q1.c
author       Tan Teck Huei Daphne
DP email     t.tan@digipen.edu
course       CS120
section      B
assignment   Lab 05
due date     10/10/15
**************************************************************************/
#include <stdio.h> /*printf*/
/*************************************************************************
Function: print_table
DESCRIPTION: Prompts users for input.
METHOD: Use printf to ask for user input.
***************************************************************************/
void print_table (void) {
  printf("Enter the Fibonacci number to calculate.\n");
  printf("The number must be an integer between 2 and 46. (Enter 1 to quit): ");
}
/**************************************************************************
Description: Create a table of Fibonacci numbers and the corresponding
Fibonacci quotients.             
METHOD: declare an array to hold Fibonacci numbers and Fibonacci quotient.
print_table() is looped until user enter a legal value. Compute and print
values for Fibonacci number and Fibonacci quotient.
Formula for Fibonacci number: FN=FN-1+FN-2 for all N ≥2
            Fibonacci quotient:  fn / fn-1
**************************************************************************/
int main (void) {
  int fn[47] = {0, 1};
  int i, input;
  double fn_quotient;
  print_table(); /*call print_table function*/
  scanf("%d", &input); /*read user input*/
  while(input != 1) { /*to exit when '1' key is entered*/
    if(input <2) { /*loop qn again*/
       print_table();
     scanf("%d", &input);
    }
    else if (input>46) { /*loop qn again*/
    print_table();
    scanf("%d", &input);
    }
    else if (input >= 2 || input <= 46) { /*input range : 2-46*/
      printf("\n     Fibonacci      Fibonacci\n");
      printf("N    number         quotient\n");
      printf("--------------------------------------\n");
      printf("0    0              N/A\n");
      printf("1    1              N/A\n");
        for (i = 2; i <=input; i++) {
          fn[i] = fn[i-1] + fn[i-2];
          fn_quotient = (double)fn[i] / (double)fn[i-1];
          printf("%-5d%-15d%.16f  \n", i, fn[i], fn_quotient); 
        }
      break;
     }
  }
  return 0;
}