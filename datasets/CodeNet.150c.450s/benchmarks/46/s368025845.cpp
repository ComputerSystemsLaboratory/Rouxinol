#include <iostream>

using namespace std;

int main() {
    while(true) {
        // input
        int n, x;
        cin >> n >> x;
        if(n == 0 && x == 0) {
            break;
        }

        // calc
        int count = 0;
        int i, ii, iii = 0;
        for(i=1; i <= n; i++) {
            //cout << "i: " << i << endl;
            for(ii = i + 1; (ii > i && ii <= n); ii++) {
                //cout << "ii: " << ii << endl;
                for(iii = ii + 1; (iii > ii && iii <= n); iii++) {
                    //cout << "iii: " << iii << endl;
                    if( i + ii + iii == x ) {
                        count += 1;
                    }
                }
            }
        }

        // output
        cout << count << endl;
    }
}
