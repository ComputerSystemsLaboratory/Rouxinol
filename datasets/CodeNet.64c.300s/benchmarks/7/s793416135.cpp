#include<iostream>
using namespace std;
int main(void) {
    int n, number, cards[4][13] = {};
    char suit, suits[] = {'S', 'H', 'C', 'D'};
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> suit >> number;;
        int j;
        switch (suit) {
            case 'S':
                j = 0;
                break;
            case 'H':
                j = 1;
                break;
            case 'C':
                j = 2;
                break;
            case 'D':
                j = 3;
                break;
        }
        cards[j][number - 1] = 1;
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            if (!cards[i][j]) {
                cout << suits[i] << " " << (j + 1) << endl;
            }
        }
    }

    return 0;
}