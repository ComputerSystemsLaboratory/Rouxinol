#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

map<string, vector<int>> genMap();
void printCards(map<string, vector<int>> &cards);
vector<string> suits = {"S", "H", "C", "D"};

int main() {
    int n;
    map<string, vector<int>> cards = genMap();

    cin >> n;
    for (int nc = 0; nc < n; nc++) {
        string s;
        int r;
        cin >> s >> r;
        vector<int>::iterator it = find(cards[s].begin(), cards[s].end(), r);
        if (it != cards[s].end()) {
            cards[s].erase(it);
        }
    }

    printCards(cards);
}

map<string, vector<int>> genMap() {
    map<string, vector<int>> gen;
    for (auto suit : suits) {
        vector<int> kind;
        for (int rank = 1; rank <= 13; rank++) {
            kind.push_back(rank);
        }
        gen.insert(make_pair(suit, kind));
    }
    return gen;
}

void printCards(map<string, vector<int>> &cards) {
    for (auto suit : suits) {
        for (auto card: cards[suit]) {
            cout << suit << " " << card << endl;
        }
    }
}