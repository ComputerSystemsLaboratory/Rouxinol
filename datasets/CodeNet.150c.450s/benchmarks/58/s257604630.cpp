#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <functional>
using namespace std;

#define REP(i,n) for(int i=0; i<n; ++i)
#define FOR(i,a,b) for(int i=a; i<=b; ++i)
#define FORR(i,a,b) for (int i=a; i>=b; --i)

typedef long long ll;

int main(void) {
    stack<int> st;
    string s;
    int a,b;
    while (cin >> s){
        if (s=="+"){
            a = st.top(); st.pop();
            b = st.top(); st.pop();
            st.push(a+b);
        }
        else if (s=="-"){
            a = st.top(); st.pop();
            b = st.top(); st.pop();
            st.push(b-a);
        }
        else if (s=="*"){
            a = st.top(); st.pop();
            b = st.top(); st.pop();
            st.push(a*b);
        }
        else{
            st.push((int)stoi(s));
        }
    }

    cout << st.top() << endl;

    return 0;
}