#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define For(i,a,b) for(int (i)=(a); (i)<(b); (i)++)

int cnt;

void printvector2(vector<int> v) {
    REP(i,v.size()-1) {
        cout << v[i] << " ";
    }
    cout << v[v.size()-1] << endl;
}

void bubblesort(vector<int> &v) {
    int N = v.size();
    int flag = 1;
    while (flag) {
        flag = 0;
        for (int j = N-1; j > 0; j--) {
            if (v[j] < v[j-1]) {
                cnt++;
                int temp = v[j];
                v[j] = v[j-1];
                v[j-1] = temp;
                flag = 1;
            }
        }
    }
}

int main() {
    int N;
    cin >> N;
    vector<int> v;
    REP(i,N) {
        int j;
        cin >> j;
        v.push_back(j);
    }
    bubblesort(v);
    printvector2(v);
    cout << cnt << endl;
    return 0;
}