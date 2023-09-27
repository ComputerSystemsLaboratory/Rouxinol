#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define For(i,a,b) for(int (i)=(a); (i)<(b); (i)++)

int cnt1;

void printvector3(vector<int> v) {
    REP(i,v.size()-1) {
        cout << v[i] << " ";
    }
    cout << v[v.size()-1] << endl;
}

void selectionsort(vector<int> &v) {
    int N = v.size();
    REP(i,N) {
        int minj = i;
        For(j,i,N) {
            if (v[j] < v[minj]) {
                minj = j;
            }
        }
        if (v[i] != v[minj]) {
            cnt1++;
            int temp = v[i];
            v[i] = v[minj];
            v[minj] = temp;
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
    selectionsort(v);
    printvector3(v);
    cout << cnt1 << endl;
    return 0;
}