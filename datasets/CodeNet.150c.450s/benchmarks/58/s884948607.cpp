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
#include <regex>

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
    string tmp;
    stack<int> S;
    while(cin >> tmp) {
        if(tmp == "+") {
            int s1 = S.top();
            S.pop();
            int s2 = S.top();
            S.pop();
            S.push(s1+s2);
        } else if(tmp == "-") {
            int s1 = S.top();
            S.pop();
            int s2 = S.top();
            S.pop();
            S.push(s2-s1); 
        } else if(tmp == "*") {
            int s1 = S.top();
            S.pop();
            int s2 = S.top();
            S.pop();
            S.push(s1*s2);
        } else {
            S.push(stoi(tmp));    
        }
    }

    cout << S.top() << endl;
    return 0;
}