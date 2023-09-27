#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <ctype.h>
#include <algorithm>
#include <cmath>

#define REP(i, n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()
#define square(x) (x) * (x)
#define cube(x) (x) * (x) * (x)

const int INF = 1e9;

using namespace std;

int main() {
    int n, q;
    cin >> n >> q ;
    string name[n];
    int t[n];
    int current = 0;
    queue<int> rest;
    REP(i, n) { cin >> name[i] >> t[i]; rest.push(i); }
    while(!rest.empty()){
        if(t[rest.front()] <= q){
            current += t[rest.front()];
            cout << name[rest.front()] << " " << current << endl;
            rest.pop();
        } else {
            t[rest.front()] -= q;
            current += q;
            rest.push(rest.front());
            rest.pop();
        }
    }

    return 0;
}