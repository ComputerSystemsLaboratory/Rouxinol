#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <cstring>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
 
#define REP(i,n) for(int i=0; i<n; ++i)
#define FOR(i,a,b) for(int i=a; i<=b; ++i)
#define FORR(i,a,b) for (int i=a; i>=b; --i)
#define pi M_PI
 
typedef long long ll;
typedef vector<int> VI;
typedef vector<ll> VL;
typedef vector<VI> VVI;
typedef pair<int,int> P;
typedef pair<ll,ll> PL;

int main() {
    int n;
    cin >> n;
    string a[10] = {"", ".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    while (n--){
        string s;
        cin >> s;
        int p = -1;
        REP(i,s.length()){
            int x = s[i] - '0';
            if (x == 0 && p >= 0){
                int y = s[i-1]-'0';
                cout << a[y][p % a[y].length()];
                p = -1;
            }
            if (x > 0) p++;
        }
        cout << endl;
    }

    return 0;
}