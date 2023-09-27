#include <algorithm>
#include <functional>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <vector>
#include <list>
#include <queue>
#include <map>
#include <set>
#include <bitset>
#include <climits>

#define all(c) (c).begin(), (c).end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define pb(e) push_back(e)
#define mp(a, b) make_pair(a, b)
#define fr first
#define sc second

const int INF=100000000;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
using namespace std;
typedef pair<int ,int > P;
typedef long long ll;

template<class T,int N=100000>
class Stack {
private:
    int ary[N];
    int top;
public:
    Stack() : top(0){}
    void push(T x) {
        ary[++top]=x;
    }
    T pop() {
        return ary[top--];
    }
    bool is_empty() {
        return top==0;
    }
    bool is_full() {
        return top >= N;
    }
    void dump() {
        rep(i,top+1) if(i) cout<<(i==1?"":" ")<<ary[i];
        cout<<endl;
    }
};

int main() {
    string s;
    Stack<int> st;
    while(cin>>s) {
        if(s=="+") {
            int a = st.pop();
            int b = st.pop();
            st.push(a+b);
        }
        else if(s=="-") {
            int a = st.pop();
            int b = st.pop();
            st.push(b-a);
        }
        else if(s=="*") {
            int a = st.pop();
            int b = st.pop();
            st.push(a*b);
        }
        else {
            st.push(atoi(s.c_str()));
        }
    }
    cout<<st.pop()<<endl;

    return 0;
}