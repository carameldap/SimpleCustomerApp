/**************************************************************************
filename     q2.c
author       Tan Teck Huei Daphne
DP email     t.tan@digipen.edu
course       CS120
section      B
assignment   Lab 05
due date     10/10/15
**************************************************************************/
#include <stdio.h> /*printf*/
/**************************************************************************
DESCRIPTION: Print out a pattern of stars(*) with the height given by the
user.

METHOD: Use scanf to read the input. While loop is used to keep looping 
until user enters legal values that is >= 0.For loop is used to print 
the pattern, taking in the height input by user. Formula is (i*2+1). 
Break to terminate the loop.
***************************************************************************/
int main(void) {
  int row,i,sp;
  scanf("%d", &row);
  /*prompt user for height, keep looping until input height >=0*/
  while(1) {
   if (row <0) {
     scanf("%d", &row);
    }
   /*print star pattern in invert pyramid*/
    else if (row>=0) {
    for (i=row; i>=0; i--) {
      for(sp=row-i; sp>0; sp--) 
        printf(" "); 
        for (sp = 2*i+1;sp>0;sp--)
          printf("*");
          printf("\n");        
    }
    break; /*end loop*/
    }
  }
  return 0;
}