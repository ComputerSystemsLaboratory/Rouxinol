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
#include <cstring>
#include <cmath>

#define rep(i, n) for(int i = 0; i < n; i ++)
#define ALL(T) T.begin(), T.end()
#define mp make_pair
#define pb push_back
#define ITER(c) __typeof((c).begin())
#define each(c, it) for(ITER(c) it = (c).begin(); it != (c).end(); it++)
#define X first
#define Y second

using namespace std;

typedef pair<int, int> pii;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<string> vs;

const int INF = 1 << 24;
const string L[10] = {"", ".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
int main(void){
    int n; cin >> n;
    for(string in; n-- && cin >> in; cout << endl){
        int cur = 0, cnt = 0;
        rep(i, in.size()){
            if(in.at(i) - '0' == cur) cnt++;
            else{
                if(in.at(i) == '0'){
                    cout << L[cur].at((cnt + L[cur].size()) % L[cur].size());
                }
                cur = in.at(i) - '0';
                cnt = 0;
            }
        }
    }

    return 0;
}