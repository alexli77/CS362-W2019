#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

//Village
int main() {
    
        struct gameState G, testG;
        int Players = 2;
    int player=0;


     result = initializeGame(Players, k, seed, &G);
    if (result == -1)
    {
      printf("Test failed.");
      flag = -5;
    }
    else
      printf("Test passed!");
    
    
    cardEffect(village, 0, 0, 0, &testG, 
            testG.hand[player][testG.handCount[player]-1], 0);

    if (G.handCount[player] + 1 == testG.handCount[player])
        printf("Test passed! Player gained 1 new card, discarded 1.\n");
    else
    {
        printf("Test failed");
        flag = -5;
    }

    if (G.numActions + 2 == testG.numActions)
        printf("Test passed! Player gained 2 actions.\n");
    else
    {
        printf("Test failed.");
        flag = -5;
    }
    
  return 0;
}
