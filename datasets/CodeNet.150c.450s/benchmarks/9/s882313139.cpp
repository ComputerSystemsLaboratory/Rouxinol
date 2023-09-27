#include <iostream>
using namespace std;
#include <string>
#include <cctype>

int main() {
    string deck, subset1, subset2;
    int m, h;
    while (1){
        cin >> deck;
        if (deck == "-") break;

        cin >> m;
        for (int i = 1; i <= m; i++){
            cin >> h;
            subset1 = deck.substr(0,h);
            subset2 = deck.substr(h,deck.size()-1);
            deck = subset2 + subset1;
        }
        cout << deck << "\n";
    }

    return 0;
}