/*
    Problem

*/
#include <bits/stdc++.h>
using namespace std;
/* typedef */
typedef long long ll;
typedef pair<int, int> pii;
/* constant */
const int INF = 1 << 30;
const int NIL = -1;
const int MAX = 10000;
const int mod = 1000000007;
const double pi = 3.141592653589;
/* global variables */
/* function */
/* main */
int main(){
    while(1) {
        int n;
        cin >> n;
        if (n == 0) return 0;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        int minD = INF;
        for (int i = 0; i < n-1; i++) {
            int d = a[i+1] - a[i];
            minD = (d < minD ? d : minD);
        }
        cout << minD << '\n';
    }
}

