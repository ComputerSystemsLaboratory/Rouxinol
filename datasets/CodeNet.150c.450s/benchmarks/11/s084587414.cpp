#include <iostream>
using namespace std;

int main (void) {
    int loop_num, i, j;
    char mark;
    int num;
    char mark_box[4] = {'S', 'H', 'C', 'D'};

    bool all_card[4][13] = {};

    cin >> loop_num;
    for(i = 0; i < loop_num; i++) {
        cin >> mark;
        cin >> num;
        switch(mark) {
            case 'S' :
                all_card[0][num - 1] = true;
                break;
            case 'H' :
                all_card[1][num - 1] = true;
                break;
            case 'C' :
                all_card[2][num - 1] = true;
                break;
            case 'D' :
                all_card[3][num - 1] = true;
                break;
        }
    }

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 13; j++) {
            if(all_card[i][j] == false) {
                cout << mark_box[i] << " " << j + 1 << endl;
            }
        }
    }
    return 0;
}