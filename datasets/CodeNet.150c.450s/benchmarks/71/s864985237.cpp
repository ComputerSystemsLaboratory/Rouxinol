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
    for(int n; cin >> n;){
        int cnt = 0;
        rep(i, 10)rep(j, 10)rep(k, 10)rep(h, 10)
          if(i + j + k + h == n) cnt++;
        cout << cnt << endl;
    }
    return 0;
}