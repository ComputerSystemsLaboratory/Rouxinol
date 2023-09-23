#include <iostream>
using namespace std;
#define NUM 13
#define SYM 4
#define S 0
#define H 1
#define C 2
#define D 3
int main(void){
    int n;
    char sym;
    int num;
    cin >> n;
    bool cards[SYM][NUM];
    for (int i = 0; i < SYM; i++) {
        for (int j = 0; j < NUM; j++) {
            cards[i][j] = false;
        }
    }
    for (int i = 0; i < n; i++) {
        cin >> sym >> num;
        switch (sym) {
            case 'S':
                cards[S][num-1] = true;
                break;
            case 'H':
                cards[H][num-1] = true;
                break;
            case 'C':
                cards[C][num-1] = true;
                break;
            case 'D':
                cards[D][num-1] = true;
                break;
        }
    }
    for (int i = 0; i < SYM; i++) {
        for (int j = 0; j < NUM; j++) {
            if (!cards[i][j]) {
                switch (i) {
                    case S:
                        cout << "S";
                        break;
                    case H:
                        cout << "H";
                        break;
                    case C:
                        cout << "C";
                        break;
                    case D:
                        cout << "D";
                        break;
                }
                cout << " " << j+1 << endl;
            }
        }
    }
}