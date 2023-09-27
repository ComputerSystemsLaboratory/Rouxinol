#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_INPUT_SIZE  1024

struct CardInfo {
    char  type;
    int   num;
};

static const int STABLE     = 1;
static const int NOT_STABLE = -1;

void dumpCardsInfo(CardInfo* cards, int num);
void dumpResult(CardInfo* cards, int num);
void readData(CardInfo* cards, int num, FILE* stdin);
void copyData(CardInfo* orgData, CardInfo*& distData, int num);

// sort
void bubbleSort(CardInfo* cards, int num);
void selectionSort(CardInfo* cards, int num);

// check
bool isStable(CardInfo* bubble, CardInfo* selection, int num);

int
main(int argc, char* argv[])
{
    char input[MAX_INPUT_SIZE];

    int num = atoi(fgets(input, sizeof(input), stdin));
    CardInfo* cards = new CardInfo[num];
    if (!cards) {
        fprintf(stderr, "Error. Cannot allocate memory\n");
        exit(1);
    }

    readData(cards, num, stdin);
    //dumpCardsInfo(cards, num);    

    CardInfo* bCards = NULL;
    copyData(cards, bCards, num);
    bubbleSort(bCards, num);
    dumpResult(bCards, num);
    printf("Stable\n");
    //dumpCardsInfo(bCards, num);

    CardInfo* sCards = NULL;
    copyData(cards, sCards, num);

    selectionSort(sCards, num);
    dumpResult(sCards, num);
    //dumpCardsInfo(sCards, num);

    if (isStable(bCards, sCards, num)) {
        printf("Stable\n");
    } else {
        printf("Not stable\n");
    }

    return 0;
}

void
dumpCardsInfo(CardInfo* cards, int num)
{
    for (int i = 0; i < num; i++) {
        printf("Card[%d] : type = %c, num = %d\n", i, cards->type, cards->num);
        cards++;
    }
}

void
dumpResult(CardInfo* cards, int num)
{
    for (int i = 0; i < num; i++) {
        if (i != 0) printf(" ");
        printf("%c%d", cards[i].type, cards[i].num);
    }
    printf("\n");
}

void
readData(CardInfo* cards, int num, FILE* stdin)
{
    char input[MAX_INPUT_SIZE];

    fgets(input, sizeof(input), stdin);
    for (int i = 0; i < num; i++) {
        char* tok = i == 0 ? strtok(input, " ") : strtok(NULL, " ");

        cards->num  = (int)tok[1] - 48;
        cards->type = tok[0];

        cards++;
    }
}

void
copyData(CardInfo* orgData, CardInfo*& distData, int num)
{
    distData = new CardInfo[num];
    if (!distData) {
        fprintf(stderr, "Error. Cannot allocate memory\n");
        return;
    }

    for (int i = 0; i < num; i++) {
        distData[i] = orgData[i];
    }

}

void
bubbleSort(CardInfo* cards, int num)
{
    for (int j = 0; j < num; j++) {
        for (int i = num-1; i > j; i--) {
            if (cards[i].num < cards[i-1].num) {
                CardInfo tmp = cards[i];
                cards[i] = cards[i-1];
                cards[i-1] = tmp;
            }
        }
    }
}

void
selectionSort(CardInfo* cards, int num)
{
    for (int i = 0; i < num; i++) {
        int minElem = i;
        for (int j = i+1; j < num; j++) {
            if (cards[j].num < cards[minElem].num) {
                minElem = j;
            }
        }
        if (cards[i].num > cards[minElem].num) {
            CardInfo tmp = cards[i];
            cards[i] = cards[minElem];
            cards[minElem] = tmp;
        }
    }
}

bool
isStable(CardInfo* bubble, CardInfo* selection, int num)
{
    bool isStable = true;

    for (int i = 0; i < num; i++) {
        if (bubble->type != selection->type) {
            isStable = false;
            break;
        }
        bubble++;
        selection++;
    }

    return isStable;
}