#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

class Card {
private:
    char m_suit;
    int m_rank;

public:
    Card(char suit, int rank)
        : m_suit(suit), m_rank(rank) {}

    char suit() const
    {
        return m_suit;
    }

    int rank() const
    {
        return m_rank;
    }

    Card& operator=(const Card& card)
    {
        this->m_suit = card.m_suit;
        this->m_rank = card.m_rank;

        return *this;
    }

    void printCard() const
    {
        cout << m_suit << m_rank;
    }
};

void bubbleSort(vector<Card>& cards);
void selectionSort(vector<Card>& cards);
void swapCards(vector<Card>& cards, unsigned i, unsigned j);
bool isStable(vector<Card>& cards01, vector<Card>& cards02);

int main()
{
    int cards_num;
    cin >> cards_num;

    vector<Card> cards01, cards02;
    cards01.reserve(cards_num);
    cards02.reserve(cards_num);

    for (auto i = 0; i < cards_num; i++) {
        char suit;
        int rank;
        cin >> suit >> rank;
        Card card(suit, rank);
        cards01.push_back(card);
        cards02.push_back(card);
    }

    bubbleSort(cards01);
    for (auto i = 0; i < cards_num; i++) {
        if (i != 0) {
            cout << " ";
        }
        cards01.at(i).printCard();
    }
    cout << endl;
    cout << "Stable" << endl;

    selectionSort(cards02);
    for (auto i = 0; i < cards_num; i++) {
        if (i != 0) {
            cout << " ";
        }
        cards02.at(i).printCard();
    }
    cout << endl;
    cout << (isStable(cards01, cards02)? "Stable": "Not stable") << endl;

    return 0;
}

void bubbleSort(vector<Card>& cards)
{
    for (auto i = 0; i < cards.size(); i++) {
        for (auto j = cards.size() - 1; j > i; j--) {
            if (cards.at(j).rank() < cards.at(j - 1).rank()) {
                swapCards(cards, j, j - 1);
            }
        }
    }
}

void selectionSort(vector<Card>& cards)
{
    int min;
    for (auto i = 0; i < cards.size(); i++) {
        min = i;
        for (auto j = i; j < cards.size(); j++) {
            if (cards.at(j).rank() < cards.at(min).rank()) {
                min = j;
            }
        }
        swapCards(cards, i, min);
    }
}

void swapCards(vector<Card>& cards, unsigned i, unsigned j)
{
    Card tmp = cards.at(i);
    cards.at(i) = cards.at(j);
    cards.at(j) = tmp;
}

bool isStable(vector<Card>& cards01, vector<Card>& cards02)
{
    for (auto i = 0; i < cards01.size(); i++) {
        if (cards02.at(i).suit() != cards01.at(i).suit()) {
            return false;
        }
    }
    return true;
}