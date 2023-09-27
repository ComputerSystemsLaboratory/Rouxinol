#include <iostream>
#include <vector>
#include <utility>
using namespace std;

struct Card {
    char mark;
    int num;
};

void bubbleSort(vector<Card>& ary) {
    for (auto i = 0; i < ary.size(); i++) {
        for (auto j = ary.size()-1; j >= i+1; j--) {
            if (ary[j].num < ary[j-1].num) {
                swap(ary[j], ary[j-1]);
            }
        }
    }
}

void selectionSort(vector<Card>& ary) {
    for (auto i = 0; i < ary.size(); i++) {
        int minj = i;
        for (auto j = i; j < ary.size(); j++) {
            if (ary[j].num < ary[minj].num) {
                minj = j;
            }
        }
        swap(ary[i], ary[minj]);
    }
}

bool isStable(const vector<Card>& ary1, const vector<Card>& ary2) {
    for (auto i = 0; i < ary1.size(); i++) {
        if (ary1[i].mark != ary2[i].mark) {
            return false;
        }
    }
    return true;
}

void printCards(const vector<Card>& ary) {
    for (auto i = 0; i < ary.size(); i++) {
        cout << (i ? " " : "") << ary[i].mark << ary[i].num;
    }
    cout << endl;
}

int main(void) {
    int n;
    cin >> n;

    vector<Card> cards1(n), cards2(n);
    for (int i = 0; i < n; i++) {
        cin >> cards1[i].mark >> cards1[i].num;
    }
    cards2 = cards1;

    bubbleSort(cards1);
    selectionSort(cards2);

    printCards(cards1);
    cout << "Stable" << endl;
    printCards(cards2);
    if (isStable(cards1, cards2)) {
        cout << "Stable" << endl;
    } else {
        cout << "Not stable" << endl;
    }

    return 0;
}