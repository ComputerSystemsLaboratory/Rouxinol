#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)

void minmax( int a, int l, int& largest, int& smallest ) {
    int base = 1;
    int x[6] = {};
    for(int i=1; i<l; i++) base *= 10;
    rep(dl, l) {
        x[dl] = (a / base) % 10;
        base /= 10;
    }
    sort( x, x+l );
    largest = smallest = 0;
    rep(i, l) {
        largest *= 10;
        smallest *= 10;
        largest += x[l-1-i];
        smallest += x[i];
    }
}

int main(){
    int a, l;
    while( cin >> a >> l, a||l ) {
        bool found = false;
        int cnt = 0;
        vector<int> hist;
        hist.push_back(a);
        while(!found) {
            cnt++;
            int large, small;
            minmax( a, l, large, small );
            int i=0;
            for(; i<hist.size(); i++) {
                if( hist[i] == large-small ) {
                    found = true;
                    break;
                }
            }
            if( !found ) {
                hist.push_back( large-small );
                a = large - small;
            } else {
                cout << i << ' ' << large-small << ' ' << cnt-i << endl;
            }
        }
    }
    return 0;
}