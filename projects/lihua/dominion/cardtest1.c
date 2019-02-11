#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

//Adventurer
int main() {
    
        struct gameState G, testG;
        int Players = 2;
    int player;


     result = initializeGame(Players, k, seed, &G);
    if (result == -1)
    {
      printf("Test failed.");
      flag = -5;
    }
    else
      printf("Test passed!");
    
    
    int assert1= ASSERT((G.hand[player][2] == copper && G.hand[player][1] == copper)
    // make sure the cards are the Tressure cards
    if(assert1 == 0)
     printf("TEST SUCCESSFULLY");
  else
     printf("TEST FAILED\n");
  return 0;
}
