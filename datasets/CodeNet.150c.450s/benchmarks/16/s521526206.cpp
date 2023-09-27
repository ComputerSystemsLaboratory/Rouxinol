#include <algorithm>
#include <iostream>
#include <string>
#include <cstring>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <deque>
#include <iomanip>
#include <limits>
#include <map>
#include <queue>
#include <stack>
#include <vector>

#define FOR(i,k,n) for(int (i) = (k); (i) < (n); ++(i))
#define rep(i,n) FOR(i,0,n)
#define pb push_back
#define all(v) begin(v), end(v)
#define debug(x) cerr << #x << ": " << x << endl
#define debug2(x,y) cerr << #x << ": " << x << ", " << #y << ": " << y << endl

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> i_i;
typedef pair<i_i, int> p_i;
typedef vector<int> vi;
typedef vector< vector<int> > vvi;
template<class T> using vv=vector< vector<T> >;
typedef deque<int> di;
typedef deque< deque<int> > ddi;


int main() {
    char s[20001] = {};
    scanf("%s",s);
    int n = strlen(s); 
    stack<int> T;
    stack<i_i> S1; 
    stack<int> S2;
    int sum = 0;
    rep(i,n) {
        if(s[i] == '\\') {
            T.push(i);
        } else if(s[i] == '/' && !T.empty()) {
            int t = T.top();
            T.pop();
            int s = (i-t-1) * 1 + 1;  
            S1.push(make_pair(t,s));  
        }
    }
    while(!S1.empty()) {
        i_i a = S1.top();
        S1.pop();     
        while(!S1.empty() && S1.top().first > a.first) {
            i_i b = S1.top();
            a.second += b.second;
            S1.pop();
        }
        sum += a.second;
        S2.push(a.second);
    }
    cout << sum << endl;
    cout << S2.size();
    while(!S2.empty()) {
        cout << " " << S2.top();
        S2.pop();
    } 
    cout << endl;
	return 0;
}