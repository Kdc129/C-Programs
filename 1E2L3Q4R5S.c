//1E=Equality 2L=Less than 3Q=Quotient and Reminder 4R=Range 5S=Swap
#include<stdio.h>

int main(){
          int X,Y;
          printf("\nInput numbers are::::");
          scanf("%d%d",&X,&Y);
          if(X==Y)
          {
                    printf("X is equal to Y");
          }
          else if(X<Y)
          {
                    printf("X is less than Y");
          }
          
          return 0;
}