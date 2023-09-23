#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <queue>
using namespace std;
typedef long long int ll;
const int INF = 100000000;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
int main(){
    int n;
    cin >> n;
    rep(i, n){
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a+3);
        if(a[2]*a[2] == (a[1]*a[1] + a[0]*a[0])){
            cout << "YES" << endl;
        }else{
            cout << "NO" <<endl;
        }
    }
    return 0;    
}