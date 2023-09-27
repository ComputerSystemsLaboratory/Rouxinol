#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

struct Card { char suit; int value; };

void printCards(const vector<Card>& cards) {
    for (int i = 0; i < cards.size(); i++) {
        cout << cards[i].suit << cards[i].value;
        if (i != cards.size() - 1) {
            cout << ' ';
        }
    }
    cout << endl;
}

void isStable(const vector<Card>& a, const vector<Card>& b) {
    vector<char> bucketA[9];
    vector<char> bucketB[9];
    for (auto& e : a) {
        bucketA[e.value - 1].push_back(e.suit);
    }
    for (auto& e : b) {
        bucketB[e.value - 1].push_back(e.suit);
    }
    bool stable = true;
    for (int i = 0; i < 9; i++) {
        if (bucketA[i] != bucketB[i]) {
            stable = false;
            break;
        }
    }
    if (stable) {
        cout << "Stable" << endl;
    } else {
        cout << "Not stable" << endl;
    }
}

void BubbleSort(const vector<Card>& in) {
    auto cards = in;
    for (auto i = 0; i < cards.size(); i++) {
        for (auto j = cards.size() - 1; j > i; j--) {
            if (cards[j].value < cards[j - 1].value) {
                swap(cards[j], cards[j - 1]);
            }
        }
    }
    printCards(cards);
    isStable(in, cards);
}

void SelectionSort(const vector<Card>& in) {
    auto cards = in;
    for (auto i = 0; i < cards.size(); i++) {
        int minj = i;
        for (auto j = i; j < cards.size(); j++) {
            if (cards[j].value < cards[minj].value) {
                minj = j;
            }
        }
        swap(cards[i], cards[minj]);
    }
    printCards(cards);
    isStable(in, cards);
}

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d\n", &n);

    vector<Card> cards;
    for (int i = 0; i < n; i++) {
        char s;
        int v;
        if (i != n - 1) {
            scanf("%c%d ", &s, &v);
        } else {
            scanf("%c%d", &s, &v);
        }
        cards.push_back({s, v});
    }

    BubbleSort(cards);
    SelectionSort(cards);

    return 0;
}