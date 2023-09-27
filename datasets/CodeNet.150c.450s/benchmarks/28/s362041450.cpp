#include <iostream>
#include <cstdio>
#include <vector>
#include <list>
#include <algorithm>
#include <cmath>
#include <stack>
#include <set>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define FOR(i,a,b) for(int (i)=(a); (i)<(b); (i)++)
#define PUSH(n,v) for(int i=0; i<(n); i++) {int j; cin >> j; v.push_back(j);}
#define ALL(v) v.begin(), v.end()

vector<int> v;
int k;

int howmanytrucks(int vol) {
    int cnt = 1;
    int sp = vol;
    REP(i,v.size()) {
        if (v[i] <= sp) sp -= v[i];
        else if (v[i] > vol) return -1;
        else {
            cnt++;
            sp = vol - v[i];
        }
    }
    return cnt;
}

bool notenoughtrucks(int vol) {
    return howmanytrucks(vol) == -1 || howmanytrucks(vol) > k;
}

int getmini(int vol, int minivol) {
    while(1) {
        if (!notenoughtrucks(minivol)) return minivol;
        else if (minivol <= vol) minivol++;
        else break;
    }
    return -1;
}

int binary_minivol(int vol, int minivol) {
    //cout << vol << " " << minivol << endl;
    if (vol - minivol < 2) return getmini(vol, minivol);
    if (notenoughtrucks(vol)) return binary_minivol(vol * 2, vol);
    else if (notenoughtrucks((vol + minivol) / 2)) {
        return binary_minivol(vol, (vol + minivol) / 2);
    }else {
        return binary_minivol((vol + minivol) / 2, minivol);
    }
}

int main() {
    int n;
    cin >> n >> k;
    
    long sum = 0;
    REP(i,n) {
        int j;
        cin >> j;
        sum += j;
        v.push_back(j);
    }
    
    int minivol = sum / v.size();
    minivol = binary_minivol(minivol * 2, minivol);
    if (minivol == -1) minivol = binary_minivol(3, 1);
    
    cout << minivol << endl;
    
    return 0;
}