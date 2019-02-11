#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
int main()
{
	struct gameState G;
    int a;
    int k[10] = { adventurer, gardens, embargo, village, minion, mine, cutpurse, sea_hag, tribute, smithy };
    
    initializeGame(2, k, 1, &state);

    state.numBuys = 0;

    a = buyCard(10, &state);

   int assert1= ASSERT(a == -1," no buys.");

    state.numBuys = 10;

    state.coins = 0;

   int assert2= ASSERT(s == -1," not enough coins.");

    state.coins = 50;

    int assert3=ASSERT(s == 0,"enough buys and coins.");


    if(assert1 +assert2+assert3== 0)
     printf("TEST SUCCESSFULLY");
  else
     printf("TEST FAILED\n");
    return 0;
} 
