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
    
    initializeGame(2, k, 2, &state);

    state.numBuys = 0;

    a = buyCard(10, &state);

    ASSERT(a == -1,"Correctly denied a buy when there are no buys.");

    state.numBuys = 10;

    state.coins = 0;

    ASSERT(s == -1,"Correctly denied a buy when there way not enough coins.");

    state.coins = 100;

    ASSERT(s == 0,"Correctly bought card when there was enough buys and coins.");

    printf("UNIT TEST 3 WAS SUCCESSFUL\n");
    return 0;
} 