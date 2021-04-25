//3A=Area of Square ,Area of Rectangle, Area of Triangle
#include<stdio.h>

int main(){
          int lenght, breath,side,height,
          Area_of_Square,Area_of_Rectangle,Area_of_Triangle;
          printf("\nInput value of lenght, breath,side,height ::");
          scanf("%d%d%d%d",&lenght, &breath,&side,&height);
          Area_of_Square=(side * side);
          Area_of_Rectangle=(lenght*breath);
          Area_of_Triangle=(height*breath)/2;
          printf("\nArea_of_Square is %d",Area_of_Square);
          printf("\nArea_of_Rectangle is %d",Area_of_Rectangle);
          printf("\nArea_of_Triangle is %d",Area_of_Triangle);

          return 0;
}