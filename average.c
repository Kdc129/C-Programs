#include<stdio.h>

int main(){
          int maths,physics,chemistry;
          float average;
          printf("\nENter marks of subjects are ::");
          scanf("%d%d%d",&maths,&physics,&chemistry);
          average=(maths+physics+chemistry)/3;
          printf("\nAverage of marks is %f",average);
          if(average>=75)
          {
                    printf("student class is A grade");
          
          }
          else 
          {
                    printf("student class is B grade");
          }

          return 0;
}