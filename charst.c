#include<stdio.h>
int main()
{
   char s[]={"how old are you?"};
   char *t=s;
   printf("size of array:%i\n",sizeof(s));
   printf("size of pointer:%i\n",sizeof(t));
  return 0;
}