#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"

int main (int argc, char** argv) {
        int kingdom[10] = {adventurer, gardens, great_hall, village, council_room, mine, cutpurse, sea_hag, tribute, smithy};
        int testSuccessful = 0, testFailed = 0,i, tests = 50000;
//universal set up, from lecture. 
        
        for(i = 0; i < tests; i++) //start a loop
        {

                int num_players = rand() % 5, player = 0, rand_seed = rand();
                struct gameState *g = malloc(sizeof(struct gameState));//alloc the memory
                
                initializeGame(num_players, kingdom, rand_seed, g);//Initialize the game,check with dominion.c

                g->deckCount[player] = rand() % MAX_DECK;
                g->discardCount[player] = rand() % MAX_DECK;
                int pastHandCount = g->handCount[player] = rand() % MAX_HAND;
                int opponentHandCount = g->handCount[1] = rand() % MAX_HAND;//randomize
               
                
                int pastNumActions = g->numActions; 

                cardEffect(great_hall, 1, 1, 1, g, 0, 0);//card effect

                if (pastHandCount  == g->handCount[player] && pastNumActions + 1  == g->numActions && opponentHandCount  == g->handCount[1]){//check if correct number of cards were added to hand of both player/opponent and buys was increased by 1.
                        testSuccessful++;
                }// check actions+1
                else
                        testFailed++;

                free(g);
            
        }
        printf("Random Test 3: Great Hall Card");
        printf("testSuccessful, testFailed, tests);

        return 0;
}
