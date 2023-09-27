#include <iostream>
#include <utility>

using namespace std;

struct Card
{
    char pic;
    unsigned int val;
    int order;
};

void quick_sort(Card *, int, int);

int partition(Card *cards, int l, int r)
{
    Card pivot = cards[r];
    int i = l - 1;

    for (int j = l; j < r; j++) {
        if (cards[j].val <= pivot.val) {
            i++;
            swap(cards[i], cards[j]);
        }
    }
    swap(cards[++i], cards[r]);
    
    return i;
}

void quick_sort(Card *cards, int l, int r)
{
    if (l < r) {
        int p = partition(cards, l, r);
        quick_sort(cards, l, p - 1);
        quick_sort(cards, p + 1, r);
    }
}

void print_cards(Card *cards, int n)
{
    for (int i = 0; i < n; i++) {
        cout << cards[i].pic << " " << cards[i].val << endl;
    }

}

bool is_stable(Card *cards, int n)
{
    for (int i = 1; i < n; i++) {
        if (cards[i-1].val == cards[i].val && cards[i-1].order > cards[i].order)
            return false;
    }
    return true;
}

int main(void)
{
    int n;
    Card cards[100000];

    cin >> n;
    for (int i = 0; i < n; i++) {
        char pic;
        unsigned int val;
        cin >> pic >> val;
        cards[i] = Card{pic, val, i};
    }

    quick_sort(cards, 0, n-1);
    cout << (is_stable(cards, n) ? "Stable" : "Not stable") << endl;
    print_cards(cards, n);
    
    return 0;
}