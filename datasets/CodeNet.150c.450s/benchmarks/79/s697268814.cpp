#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, r;
    while(cin >> n >> r, n|r){
        vector<int> deck;
        for(int i=n; i>0; --i)deck.push_back(i);
        while(r--){
            int p, c;
            cin >> p >> c;
            --p;
            rotate(deck.begin(), deck.begin() + p, deck.begin() + p + c);
        }
        cout << deck[0] << '\n';
    }
    return 0;
}