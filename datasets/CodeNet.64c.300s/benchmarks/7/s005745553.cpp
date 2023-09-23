#include <iostream>

using namespace std;

int main() {
    int i, j, n;
    char mark;
    char marks[4] = {'S', 'H', 'C', 'D'};
    int num;
    bool cards[4][13] = {false};
    
    cin >> n;
    
    for(i = 0; i < n; i++) {
        cin >> mark >> num;
        
        for(j = 0; j < 4; j++) {
            if(mark == marks[j]) {
                cards[j][num-1] = true;
                break;
            }
        }
    }
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 13; j++) {
            if(!cards[i][j]) {
                cout << marks[i] << " " << j+1 << endl;
            }
        }
    }

}