#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DECK_SIZE 52
#define SUIT_COUNT 4
#define RANK_COUNT 13
#define PLAYER_COUNT 4
#define CARDS_PER_PLAYER 5

typedef struct {
    int rank;   
    int suit;   
} Card;

const char *ranks[RANK_COUNT] = {
    "Ace", "2", "3", "4", "5", "6", "7",
    "8", "9", "10", "Jack", "Queen", "King"
};

const char *suits[SUIT_COUNT] = {
    "Hearts", "Diamonds", "Clubs", "Spades"
};

void createDeck(Card deck[]) {
    int index = 0;
    for (int suit = 0; suit < SUIT_COUNT; suit++) {
        for (int rank = 0; rank < RANK_COUNT; rank++) {
            deck[index].rank = rank;
            deck[index].suit = suit;
            index++;
        }
    }
}

int randomInt(int n) {
    int limit = RAND_MAX - (RAND_MAX % n);
    int r;
    do {
        r = rand();
    } while (r >= limit);
    return r % n;
}
void shuffleDeck(Card deck[]) {
    for (int i = DECK_SIZE - 1; i > 0; i--) {
        int j = randomInt(i + 1);
        Card temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }
}
void printCard(Card card) {
    printf("%s of %s", ranks[card.rank], suits[card.suit]);
}

void displayDeck(const Card deck[]) {
    for (int i = 0; i < DECK_SIZE; i++) {
        printf("%2d. ", i + 1);
        printCard(deck[i]);
        printf("\n");
    }
}

int validateDeck(const Card deck[]) {
    int seen[SUIT_COUNT][RANK_COUNT] = {{0}};

    for (int i = 0; i < DECK_SIZE; i++) {
        int suit = deck[i].suit;
        int rank = deck[i].rank;

        if (suit < 0 || suit >= SUIT_COUNT ||
            rank < 0 || rank >= RANK_COUNT) {
            return 0;
        }

        if (seen[suit][rank] != 0) {
            return 0; 
        }
        seen[suit][rank] = 1;
    }

    for (int suit = 0; suit < SUIT_COUNT; suit++) {
        for (int rank = 0; rank < RANK_COUNT; rank++) {
            if (seen[suit][rank] != 1) {
                return 0; 
            }
        }
    }
    return 1;
}

void dealCards(const Card deck[]) {
    printf("\nDealing %d cards to each of %d players\n",
           CARDS_PER_PLAYER, PLAYER_COUNT);

    for (int player = 0; player < PLAYER_COUNT; player++) {
        printf("Player %d: ", player + 1);
        for (int k = 0; k < CARDS_PER_PLAYER; k++) {
            int index = player * CARDS_PER_PLAYER + k;
            printCard(deck[index]);
            if (k < CARDS_PER_PLAYER - 1) {
                printf(", ");
            }
        }
        printf("\n");
    }

    printf("Cards dealt: %d\n", PLAYER_COUNT * CARDS_PER_PLAYER);
    printf("Cards remaining in deck: %d\n",
           DECK_SIZE - PLAYER_COUNT * CARDS_PER_PLAYER);
}

int main(void) {
    Card deck[DECK_SIZE];

    /* Mix time and clock() so two runs in the same second still differ. */
    srand((unsigned int)time(NULL) ^ (unsigned int)clock());

    createDeck(deck);

    printf("RANDOMIZED ALGORITHMS: PLAYING CARDS\n");
    printf("A standard deck contains %d cards.\n", DECK_SIZE);

    shuffleDeck(deck);

    printf("\nShuffled deck:\n");
    displayDeck(deck);

    if (validateDeck(deck)) {
        printf("\nValidation: PASS. All 52 cards appear exactly once.\n");
    } else {
        printf("\nValidation: FAIL. Deck contains an error.\n");
        return 1;
    }

    dealCards(deck);
    return 0;
}