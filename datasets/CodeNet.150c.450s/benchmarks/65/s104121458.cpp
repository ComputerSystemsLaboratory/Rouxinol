#include <iostream>
#include <stdlib.h>

using namespace std;

class Card
{
public:
    char suit;
    int value;

    Card() {}
    Card(char s, int v);
    void getCard();
};

Card::Card(char s, int v)
{
    suit = s;
    value = v;
}

void Card::getCard()
{
    cout << this->suit << this->value;
}

void printCards(Card cards[], int N)
{
    for (int i = 0; i < N; ++i)
    {
        if (i > 0) cout << " ";
        cards[i].getCard();
    }
    cout << endl;
}

void swap(Card & c1, Card & c2)
{
    char s = c1.suit;
    int v = c1.value;
    c1.suit = c2.suit;
    c1.value = c2.value;
    c2.suit = s;
    c2.value = v;
}

void bubbleSort(Card cards[], int N)
{
    for (int i = 0; i < N - 1; ++i)
    {
        for (int j = N - 1; j > i; j--)
        {
            if (cards[j].value < cards[j-1].value) swap(cards[j], cards[j-1]);
        }
    }
    printCards(cards, N);
}

void selectionSort(Card cards[], int N)
{
    for (int i = 0; i < N; ++i)
    {
        int min_index = i;
        for (int j = i; j < N; ++j)
        {
            if (cards[j].value < cards[min_index].value)
            {
                min_index = j;
            }
        }
        swap(cards[i], cards[min_index]);
    }
    printCards(cards, N);
}

bool isStable(Card bcards[], Card scards[], int N)
{
    bool flag = true;
    for (int i = 0; i < N; i++)
    {
        if (bcards[i].value == scards[i].value)
        {
            if (bcards[i].suit != scards[i].suit)
            {
                flag = false;
                return flag;
            } 
        }
    }

    return flag;
}

int main()
{
    int N;
    cin >> N;
    Card cards[N], b_cards[N], s_cards[N];
    for (int i = 0; i < N; ++i)
    {
        char suit;
        int value;
        string s;
        cin >> s;

        suit = char(s[0]);
        value = atoi(&s[1]);
        // Original array
        cards[i].suit = suit;
        cards[i].value = value;
        // Array will be applied BubbleSort
        b_cards[i].suit = suit;
        b_cards[i].value = value;
        // Array will be applied SelectionSort
        s_cards[i].suit = suit;
        s_cards[i].value = value;
    }

    bubbleSort(b_cards, N);
    cout << "Stable\n";

    selectionSort(s_cards, N);
    if (isStable(b_cards, s_cards, N))
    {
        cout << "Stable\n";
    } else {
        cout << "Not stable\n";
    }

    return 0;
}

