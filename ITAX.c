#include<stdio.h>

int main(){
          int Basic_salary;
          printf("ENter tax value is ::");
          scanf("%d",&Basic_salary);
          if(Basic_salary<150000)
          {
                    printf("TAX=0");
          }
          else if(150000<Basic_salary<300000)
          {
                    printf("TAX=20%");
          }
      
          return 0;
}