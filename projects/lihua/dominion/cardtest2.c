#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

//Smithy
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
    
    
    cardEffect(smithy, 0, 0, 0, &testG, 
            testG.hand[thisPlayer][testG.handCount[thisPlayer]-1], 0);

    if (G.handCount[player] + 3 == testG.handCount[player])
        printf("Test passed! Player gained 3 new cards and discarded 1.\n");
    else
    {
        printf("Test failed.\n");
        flag = -5;
    }
    
  return 0;
}
