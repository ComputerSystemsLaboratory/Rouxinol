#include<stdio.h>
#include<iostream>
#include<list>
#include<map>
#include<math.h>
#include<vector>
#include<algorithm>
#include<string.h>
#include<iomanip>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug" << x << endl;
using namespace std;

int main(){
    int fx[200000], n;
    cin >> n;
    rep(i, n){
        cin >> fx[i];
    }

    int maxv = -2000000000, minv = fx[0];
    range(i, 1, n){
        maxv = max(maxv, fx[i] - minv);
        minv = min(minv, fx[i]);
    }
    cout << maxv << endl;

    return 0;
}