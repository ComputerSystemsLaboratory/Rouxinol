#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    while(true) {
        int nCard, cycle; cin >> nCard >> cycle;
        if(nCard == 0 && cycle == 0) return 0;
        vector<int> card(nCard);
        for(int i = 0; i < nCard; i++) card[i] = i+1;
        reverse(card.begin(), card.end());

        for(int i = 0; i < cycle; i++) {
            int loc, num; cin >> loc >> num;
            rotate(card.begin(), card.begin()+loc-1, card.begin()+loc-1+num);
        }
        cout << card[0] << endl;
    }
}

