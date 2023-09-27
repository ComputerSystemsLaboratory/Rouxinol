#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main(void){
    int n;
    cin >> n;
    int card[13][13];
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 13; j++)
            card[i][j] = 0;
 
    for (int h = 0; h < n; h++){
        char c;
        int cn, num;
        cin >> c >> num;
        switch (c){
        case 'S': cn = 0; break;
        case 'H': cn = 1; break;
        case 'C': cn = 2; break;
        case 'D': cn = 3; break;
        }
        card[cn][num - 1] = 1;
    }
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 13; j++){
            if (card[i][j] == 0){
                char c;
                switch (i){
                case 0: c = 'S'; break;
                case 1: c = 'H'; break;
                case 2: c = 'C'; break;
                case 3: c = 'D'; break;
                }
                cout << c << " " << j + 1 << endl;
            }
        }
    }
}