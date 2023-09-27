#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> card;

int main() {
    vector<card> deck;
    char suit;
    int rank;
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            deck.push_back(make_pair(i, j));
        }
    }
    
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> suit >> rank;
        if (suit == 'S') {
            remove(deck.begin(), deck.end(), make_pair(0,rank - 1));
        } else if (suit == 'H') {
            remove(deck.begin(), deck.end(), make_pair(1,rank - 1));
        } else if (suit == 'C') {
            remove(deck.begin(), deck.end(), make_pair(2,rank - 1));
        } else if (suit == 'D') {
            remove(deck.begin(), deck.end(), make_pair(3,rank - 1));
        }
    }
    
    sort(deck.begin(), deck.end());
    
    for (int i = 0; i < (52 - n); i++) {
        if (deck[i].first == 0) {
            cout << "S " << deck[i].second + 1 << endl;
        } else if (deck[i].first == 1) {
            cout << "H " << deck[i].second + 1 << endl;
        } else if (deck[i].first == 2) {
            cout << "C " << deck[i].second + 1 << endl;
        } else if (deck[i].first == 3) {
            cout << "D " << deck[i].second + 1 << endl;
        }
    }
}
