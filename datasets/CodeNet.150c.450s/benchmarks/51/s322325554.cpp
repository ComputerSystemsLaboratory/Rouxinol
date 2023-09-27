#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <stack>
#include <string>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cmath>

#define rep(i, n) for(int i = 0; i < n; i ++)
#define ALL(T) T.begin(), T.end()

using namespace std;

typedef pair<int, int> pii;
typedef unsigned long long ull;

const int N = 30;

int main(void){
    vector<bool> safe(N);
    rep(i, N) safe[i] = false;
    for(int n; cin >> n; safe[n - 1] = true) ;
    rep(i, N) if(!safe[i]) cout << i + 1 << endl;
 
    return 0;
}