#include<stdio.h>
void cookies_array(char msg[])
 {
    printf("the array stored at:%p;\n",msg);
    printf("the size of the array:%i;\n",sizeof(msg));
 }
int main()
{
  char  cookie[]="i love cookies!";
  cookies_array(cookie);
return 0;
 }