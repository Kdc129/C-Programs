//A=addition S=subtraction M=multiplication D=division
#include<stdio.h>

int main(){
          int a,b,addition,subtraction,multiplication,division;
          printf("\nInput number ::");
          scanf("%d%d",&a,&b);
          addition=a+b;
          subtraction=a-b;
          multiplication=a*b;
          division=a/b;
          printf("%d\t%d\t%d\t%d",addition,subtraction,multiplication,division);
          return 0;
}