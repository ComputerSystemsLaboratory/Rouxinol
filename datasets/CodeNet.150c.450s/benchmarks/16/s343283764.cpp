#include <iostream>
#include <cstdio>
#include <vector>
#include <list>
#include <algorithm>
#include <cmath>
#include <stack>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define For(i,a,b) for(int (i)=(a); (i)<(b); (i)++)

typedef pair<int, int> P;

int main() {
    stack<int> st;
    stack<P> st2;
    string s;
    cin >> s;
    REP(i,s.size()) {
        if (s[i] == '\\') {
            st.push(i);
        }else if (s[i] == '/' && st.size() > 0) {
            int j = st.top(); st.pop();
            int area = i - j;
            while(st2.size() > 0 && st2.top().first > j) {
                area += st2.top().second; st2.pop();
            }
            st2.push(make_pair(j, area));
        }
    }
    
    vector<int> v;
    int sum = 0;
    int size = st2.size();
    REP(i,size) {
        int area = st2.top().second;
        sum += area;
        v.push_back(area);
        st2.pop();
    }
    cout << sum << endl << size;
    for(int i = size-1; i >= 0; i--) {
        cout << " " << v[i];
    }
    cout << endl;
    return 0;
}