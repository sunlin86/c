#include<stdio.h>
void go_south_east(int *lat,int *lon)
  {
         *lat=*lat-1;
         *lon=*lon+1;
  }
int main()
 {
   int latiude=64;
   int lontiu=32;
   go_south_east(&latiude,&lontiu);
   printf("当前位置在: [%i,%i]\n",latiude,lontiu);
   return 0; 
  
  }