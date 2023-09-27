#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <cstring>
using namespace std;
typedef long long int ll;
const int INF = 1000000000;
#define rep(i,n) for(int i=0;i<(int)(n);i++)

int main(){
    int n; cin >> n;
    int a = 100000;
    rep(i, n){
        int b = a / 20;
        a += b;
        //cout << a << " ";
        int k = a % 1000;
        if(k){
            a -= k;
            a += 1000;
        }
        //cout << a << endl;
    }
    cout << a << endl;
    return 0;
}