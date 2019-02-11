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
	int k[10] = { adventurer, gardens, embargo, village, minion, mine, cutpurse, sea_hag, tribute, smithy };
	int a = initializeGame(2, k, 3, &G);
	

	int j = isGameOver(&G);
	assert(j == 0);
	printf("\nTest Passed\n");

	
	assert(a == 0);
	return 0;
} 