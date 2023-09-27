#include <iostream>
using namespace std;
int main(void){
    int n;
    while(cin >> n && n) {
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