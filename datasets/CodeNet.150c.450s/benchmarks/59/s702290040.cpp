#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define For(i,a,b) for(int (i)=(a); (i)<(b); (i)++)

void printvector(vector<int> v) {
    REP(i,v.size()-1) {
        cout << v[i] << " ";
    }
    cout << v[v.size()-1] << endl;
}

void insertsort(vector<int> &v) {
    for (int i = 1; i < v.size(); i++) {
        printvector(v);
        int w = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] > w) {
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = w;
    }
    printvector(v);
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
    insertsort(v);
    return 0;
}