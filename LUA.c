#include<stdio.h>

int main(){
          char a;
          printf("\nInput a character ::");
          scanf("%c",&a);
          printf("ENTERED character is %c::%d\n",a,a);
          if(a>=48 && a<=58)
          {
                    printf("\nASCII value is digit");
          }
          else if(a>=65 && a<=90)
          {
                    printf("\nASCII value is uppercase");
          }
          else 
          {
                    printf("ASCII value is lowercase");
          }
          return 0;
          
}