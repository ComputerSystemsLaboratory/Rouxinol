#include <iostream>
using namespace std;

struct Card { char value, suit; };

void show(struct Card cards[], int n) {
    for (int k = 0; k < n; ++k) {
        if( k == n - 1) {
            cout << cards[k].suit << cards[k].value;
        } else {
            cout << cards[k].suit << cards[k].value << " ";
        }
    }
    cout << endl;
}

void bubble_sort(Card cards[], int n) {
    int flag = 1;
    for (int i = 0; flag; ++i) {
       flag = 0;
        for (int j = n - 1; j >= i + 1; --j) {
            if(cards[j].value < cards[j - 1].value) {
                Card temp = cards[j];
                cards[j] = cards[j - 1];
                cards[j - 1] = temp;
                flag = 1;
            }
        }
    }
    show(cards, n);
}

void select_sort(Card cards[], int n) {
    for (int i = 0; i < n; ++i) {
        int min = i;
        for (int j = i; j < n; ++j) {
            if(cards[j].value < cards[min].value) {
                min = j;
            }
        }
        if(i != min) {
            Card temp = cards[i];
            cards[i] = cards[min];
            cards[min] = temp;
        }
    }
    show(cards, n);
}

bool is_stable(struct Card C1[], struct Card C2[], int n) {
    for (int i = 0; i < n; ++i) {
        if (C1[i].suit != C2[i].suit) {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    Card C1[n];
    Card C2[n];
    for (int i = 0; i < n; ++i) {
        cin >> C1[i].suit >> C1[i].value;
    }
    for (int j = 0; j < n; ++j) {
        C2[j] = C1[j];
    }
    bubble_sort(C1, n);
    cout << "Stable" << endl;
    select_sort(C2, n);
    if(is_stable(C1, C2, n)) {
        cout << "Stable" << endl;
    } else {
        cout << "Not stable" << endl;
    }
    return 0;
}