#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define For(i,a,b) for(int (i)=(a); (i)<(b); (i)++)

typedef pair<int, string> P;

void printvector3(vector<P> v) {
    REP(i,v.size()-1) {
        cout << v[i].second << v[i].first << " ";
    }
    cout << v[v.size()-1].second << v[v.size()-1].first << endl;
}

void bubblesort2(vector<P> &v) {
    int N = v.size();
    int flag = 1;
    while (flag) {
        flag = 0;
        for (int j = N-1; j > 0; j--) {
            if (v[j].first < v[j-1].first) {
                P temp = v[j];
                v[j] = v[j-1];
                v[j-1] = temp;
                flag = 1;
            }
        }
    }
}

void selectionsort2(vector<P> &v) {
    int N = v.size();
    REP(i,N) {
        int minj = i;
        For(j,i,N) {
            if (v[j].first < v[minj].first) {
                minj = j;
            }
        }
        if (v[i].first != v[minj].first) {
            P temp = v[i];
            v[i] = v[minj];
            v[minj] = temp;
        }
    }
}

bool checkifstable(vector<P> v, vector<P> w) {
    REP(i,v.size()) {
        if (v[i].second != w[i].second) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    cin >> N;
    vector<P> v;
    REP(i,N) {
        string j;
        cin >> j;
        int c = j[1]-'0';
        string s; s.push_back(j[0]);
        P p = make_pair(c, s);
        v.push_back(p);
    }
    vector<P> w(v);
    bubblesort2(v);
    printvector3(v);
    cout << "Stable" << endl;
    selectionsort2(w);
    printvector3(w);
    if (checkifstable(v,w)) {
        cout << "Stable" << endl;
    }else {
        cout << "Not stable" << endl;
    }
    return 0;
}