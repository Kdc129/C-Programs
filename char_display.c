#include<stdio.h>

int main(){
          char c;
          printf("\nInput a character:: ");
          scanf("%c",&c);
          printf("Enter character is %c\n",c);
          printf("Previous character input %c\n",c-1);
          printf("Next character input %c\n",c+1);
          return 0;
}