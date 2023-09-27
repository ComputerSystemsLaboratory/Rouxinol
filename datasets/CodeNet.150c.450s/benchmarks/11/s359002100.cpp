#include <iostream>
using namespace std;

int main() {
    bool spade[13], heart[13], club[13], diamond[13];
    int n, index;
    char picture;

    for (int i = 0; i < 13; i++) {
        spade[i] = false;
        heart[i] = false;
        club[i] = false;
        diamond[i] = false;
    }
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> picture >> index;
        switch (picture) {
            case 'S':
                spade[index - 1] = true;
                break;
            case 'H':
                heart[index - 1] = true;
                break;
            case 'C':
                club[index - 1] = true;
                break;
            case 'D':
                diamond[index - 1] = true;
                break;
        }
    }

    for (int i = 0; i < 13; i++) {
        if (spade[i] == false) {
            cout << 'S' << ' ' << (i + 1) << endl;
        }
    }
    for (int i = 0; i < 13; i++) {
        if (heart[i] == false) {
            cout << 'H' << ' ' << (i + 1) << endl;
        }
    }
    for (int i = 0; i < 13; i++) {
        if (club[i] == false) {
            cout << 'C' << ' ' << (i + 1) << endl;
        }
    }
    for (int i = 0; i < 13; i++) {
        if (diamond[i] == false) {
            cout << 'D' << ' ' << (i + 1) << endl;
        }
    }

    return 0;
}