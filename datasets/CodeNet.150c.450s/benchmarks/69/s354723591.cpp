#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <stack>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define For(i,a,b) for(int (i)=(a); (i)<(b); (i)++)
#define PUSH(n,v) for(int i=0; i<(n); i++) {int j; cin >> j; v.push_back(j);}

const int MAX_NUM = 10;

bool checklast2(stack<int> st1, stack<int> st2) {
    if (st1.size() > 1) {
        int top, second;
        top = st1.top(); st1.pop();
        second = st1.top();
        if (top < second) return false;
    }
    if (st2.size() > 1) {
        int top, second;
        top = st2.top(); st2.pop();
        second = st2.top();
        if (top < second) return false;
    }
    return true;
}

bool dfs2(stack<int> st1, stack<int> st2, vector<int> v, int size);

bool dfs1(stack<int> st1, stack<int> st2, vector<int> v, int size) {
    if (size == MAX_NUM) {
        if (!checklast2(st1, st2)) return false;
        else return true;
    }else {
        if (!checklast2(st1, st2)) return false;
    }
    st1.push(v[size]);
    if (dfs1(st1, st2, v, size+1)) {//
        return true;
    }else {
        return dfs2(st1, st2, v, size+1);
    }
}

bool dfs2(stack<int> st1, stack<int> st2, vector<int> v, int size) {
    if (size == MAX_NUM) {
        if (!checklast2(st1, st2)) return false;
        else return true;
    }else {
        if (!checklast2(st1, st2)) return false;
    }
    st2.push(v[size]);
    if (dfs1(st1, st2, v, size+1)) {//
        return true;
    }else {
        return dfs2(st1, st2, v, size+1);
    }
}

void solve33() {
    stack<int> st1;
    stack<int> st2;
    vector<int> v;
    PUSH(MAX_NUM,v);
    if (dfs1(st1, st2, v, 0)) {
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }
}

int main() {
    int n;
    cin >> n;
    REP(i,n) {
        solve33();
    }
    return 0;
}