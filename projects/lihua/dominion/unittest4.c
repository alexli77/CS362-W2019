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

    ASSERT(a == -1," no buys.");

    state.numBuys = 10;

    state.coins = 0;

    ASSERT(s == -1," not enough coins.");

    state.coins = 50;

    ASSERT(s == 0,"enough buys and coins.");

 
    return 0;
} 
