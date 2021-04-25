#include<stdio.h>

int main(){
          int r,h;
          float area,volume, pi;
           pi=3.1412;
          printf("\n Input radius and height ::::");
          scanf("%d %d",&r,&h);
          area = (2*pi*r*r)+(2*pi*r*h);
          volume = (r*r)*h*pi;
          printf("\n Area of cylinder is %f",area);
          printf("\n volumn of cylinder is %f", volume);
          return 0;
}