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
#define mp make_pair
#define N first
#define L second

using namespace std;

typedef pair<int, int> pii;
typedef pair<string, string> pss;
typedef unsigned long long ull;

int main(void){
    map<string, pii> dic;
    pss res;

    for(string in; cin >> in;){
        dic[in].N ++;
        dic[in].L = in.size();

        if(dic[res.N].N < dic[in].N)
            res.N = in;
        if(dic[res.L].L < dic[in].L)
            res.L = in;
    }
    cout << res.N << " " << res.L << endl;

    return 0;
}