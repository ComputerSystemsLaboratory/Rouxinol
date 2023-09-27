#include <iostream>
#include <cstdio>
#include <vector>
#include <list>
#include <algorithm>
#include <cmath>
#include <stack>
#include <limits>
#include <set>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define FOR(i,a,b) for(int (i)=(a); (i)<(b); (i)++)
#define PUSH(n,v) for(int i=0; i<(n); i++) {int j; cin >> j; v.push_back(j);}
#define ALL(v) v.begin(), v.end()

void printvector4(vector<int> v) {
    REP(i,v.size()-1) {
        cout << v[i] << " ";
    }
    cout << v[v.size()-1] << endl;
}

void countingSort(vector<int> &v, int maxv) {
    vector<int> cnt(maxv+1, 0);
    REP(i,maxv+1) cnt[i] = 0;
    REP(i,v.size()) {
        cnt[v[i]]++;
    }
    int i = 0, j = 0;
    while (j < v.size()) {
        if (cnt[i]) {
            REP(k,cnt[i]) {
                v[j] = i;
                j++;
            }
        }
        i++;
    }
}

int main() {
    int n;
    cin >> n;
    int maxv = 0;
    vector<int> v;
    REP(i,n) {
        int j;
        cin >> j;
        maxv = max(maxv, j);
        v.push_back(j);
    }
    countingSort(v, maxv);
    printvector4(v);
    return 0;
}