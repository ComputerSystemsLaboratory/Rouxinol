#include <iostream>
#include <vector>
using namespace std;
int main(void){
    int n;
    string move[100];
    while(cin >> n && n) {
        fill(move, move + 100, "");
        char preUd = 'd', state = 'd';
        int count = 0;
        for (int i = 0; i < n; ++i) {
            string move;
            cin >> move;
            char ud = move[1];
            if (preUd == ud && state != ud) {
                ++count;
                state = ud;
            }
            preUd = ud;
        }
        cout << count << endl;
    }
    return 0;
}