#include<iostream>
#include<vector>

using namespace std;

int main() {
    while (1) {
        int n, r;
        cin >> n >> r;
        
        if (n * r == 0) break;
        vector<int> card;
        
        for (int i = 0; i < n; ++i) {
            card.push_back(n - i);
        }

        for (int i = 0; i < r; ++i) {
            int p, c;
            cin >> p >> c;
            for (int k = 0; k < c; ++k) {
                int temp = card[c + p - 2];
                card.erase(card.begin() + c + p - 2);
                card.insert(card.begin(), temp);
            }
        }

        cout << card[0] << endl;
    }
}