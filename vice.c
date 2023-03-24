#include "stdio.h"
#include "defs.h"

// Note: When defining external variables, ensure that they are outside of a function (Example below)
int Sq120ToSq64[BRD_SQ_NUM];
int Sq64ToSq120[64];

int main()
{
 AllInit();

 int index = 0;

 for (index = 0; index < BRD_SQ_NUM; ++index)
 {
  if (index % 10 == 0)
   printf("\n");
  printf("%5d", Sq120ToSq64[index]);
 }

 printf("\n");
 printf("\n");

 for (index = 0; index < 64; ++index)
 {
  if (index % 8 == 0)
   printf("\n");
  printf("%5d", Sq64ToSq120[index]);
 }

 return 0;
}