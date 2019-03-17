#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
int main (int argc, char** argv)	{
	struct gameState G;
	G.coins = 0;
	
    int k[10] = {adventurer, council_room, feast, gardens, mine, remodel, smithy, village, baron, great_hall};
    
    initializeGame(2, k, 1, &G);
        
    
	G.hand[0][0] = copper;
	G.hand[0][1] = copper;
	G.hand[0][2] = copper;
	G.hand[0][3] = copper;
	G.hand[0][4] = copper;
	G.hand[0][5] = copper;
	G.hand[0][6] = copper;
	G.hand[0][7] = copper;
	G.hand[0][8] = copper;
	G.hand[0][9] = copper;
	updateCoins(0,&G, 0);

    if(G.coins == 10)
		printf("Test Passed\n");
	else
		printf("Test Failed\n");
	
	

	return 0;
}