#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
int main ()	
{
    struct gameState G;

   for (i = 0; i < 5; i++){
      G.whoseTurn = turn;
      result = whoseTurn(&G);

      if (result == turn)   
         printf("Test %d passed! \n");
      else {
         printf("Test %d failed\n");
      }
      turn++;
   }
 

   return 0;

}