#include "stdio.h"
#include "defs.h"

// Note: When defining external variables, ensure that they are outside of a function (Example below)
int Sq120ToSq64[BRD_SQ_NUM];
int Sq64ToSq120[64];

int main()
{
 AllInit();

 U64 playBitBoard = 0ULL;

 playBitBoard |= (1ULL << SQ64(D2));
 playBitBoard |= (1ULL << SQ64(D3));
 playBitBoard |= (1ULL << SQ64(D4));

 int sq64 = 0;
 while (playBitBoard)
 {
  sq64 = POP(&playBitBoard);
  printf("popped:%d\n", sq64);
  PrintBitBoard(playBitBoard);
 }

 printf("\n");
 PrintBitBoard(playBitBoard);

 int count = CNT(playBitBoard);

 printf("Count:%d\n", count);
 printf("\n");
 int index = POP(&playBitBoard);
 printf("index:%d\n", index);
 PrintBitBoard(playBitBoard);
 count = CNT(playBitBoard);
 printf("Count:%d\n", count);

 return 0;
}