#include<stdio.h>

int main()
{
  int contestants[]={1,2,3};
  int *choice=contestants;
  contestants[0]=2;//2
  contestants[1]=contestants[2];//3
  contestants[2]=*choice;//2
  printf("i'm going to pick contestant number{%i,%i,%i}\n",contestants[0],contestants[1],contestants[2]);
  return 0;

}