#include<stdio.h>
#include<stdlib.h>
int main()
   {
      char card_name[3];
      puts("�����뿨����:");
      scanf("%2s",card_name);
      int val=0;
      if(card_name=='K')
       {
         val=10;
        } 
      else if(card_name=='Q')
        {
         val=10;
         }
      else if(card_name=='J')
        {
         val=10;
         }
      else
       {
         val=atoi(card_name);
        }
/*��鿨���Ƿ���3��6֮��*/
      if((val>2)&&(val<7))
       puts("��������");
      else if(val==10)
       puts("��������");
     return 0;

    }