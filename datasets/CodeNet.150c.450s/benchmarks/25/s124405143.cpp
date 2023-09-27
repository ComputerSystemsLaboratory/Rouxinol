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
    string s;
    int a[26] = {};
    while (getline(cin, s) && !s.empty()){
        REP(i,s.length()){
            if (s[i] >= 'A' && s[i] <= 'Z')
                a[s[i]-'A']++;
            else if (s[i] >= 'a' && s[i] <= 'z')
                a[s[i]-'a']++;
        }
    }
    REP(i,26){
        printf("%c : %d\n", i+'a', a[i]);
    }
    return 0;
}