#include<stdio.h>

int main(){
          int r,R; // r=inner radius ,R=outer radius;
          float pi, perimeter, area;
          pi=3.1412;
          printf("\nValues of inner and outer radius :: ");
          scanf("%d %d", &r,&R);
          perimeter = 2*(pi)*(r+R);
          printf("\nPerimeter of RING is %f",perimeter);
          area = pi*(r*r)*(R*R);
          printf("\nArea of a RING is %f",area);
          return 0;
}