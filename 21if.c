#include<stdio.h>
#include<stdlib.h>
int main()
   {
      char card_name[3];
      puts("请输入卡牌名:");
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
/*检查卡牌是否在3到6之间*/
      if((val>2)&&(val<7))
       puts("计数增加");
      else if(val==10)
       puts("计数减少");
     return 0;

    }