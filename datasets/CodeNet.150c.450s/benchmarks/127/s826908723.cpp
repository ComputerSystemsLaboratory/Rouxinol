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

string reverse(string s){
    string t;
    REP(i,s.length()){
        t += s[s.length()-1-i];
    }
    return t;
}

int main() {
    int n;
    cin >> n;
    while (n--){
        string s;
        cin >> s;
        int m = s.length();
        set<string> st;
        st.insert(s);
        REP(i,m-1){
            string s1, s2, s1r, s2r;
            s1 = s.substr(0,i+1);
            s2 = s.substr(i+1);
            s1r = reverse(s1);
            s2r = reverse(s2);
            st.insert(s1+s2r);
            st.insert(s1r+s2);
            st.insert(s1r+s2r);
            st.insert(s2+s1r);
            st.insert(s2r+s1);
            st.insert(s2+s1);
            st.insert(s2r+s1r);
        }
        cout << st.size() << endl;
    }
    return 0;
}