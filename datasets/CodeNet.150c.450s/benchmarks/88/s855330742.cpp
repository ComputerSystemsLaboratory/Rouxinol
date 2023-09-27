#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
#define rep(i, n) for(int i=0; i<(n); ++i)

int main(void){
    int h, w, diag;
    int bh, bw;
    while(cin >> h >> w && h) {
        int mind = numeric_limits<int>::max();
        int bh = numeric_limits<int>::max();
        diag = h*h + w*w;
        for(int i=1; i<151; ++i) {
            for(int j=i+1; j<151; ++j) {
                int t = i*i+j*j;
                if(t > diag || (t==diag && i>h)) {
                    if(t < mind || (t==mind && i<bh)) {
                        mind = t;
                        bh = i;
                        bw = j;
                    }
                    break;
                }
            }
        }
        cout << bh << " " << bw << endl;
    }
}