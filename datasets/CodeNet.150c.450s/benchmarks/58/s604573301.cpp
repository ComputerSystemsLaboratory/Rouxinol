#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <string>
#include <sstream>
#include <complex>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
#include <iomanip>
using namespace std;
typedef long long ll;
template<typename T> using min_priority_queue = priority_queue<T, vector<T>, greater<T>>;

#define EPS (1e-7)
#define INF (1e15)
#define PI (acos(-1))
#define MOD 1000000007

#define REP(i,n) for(int i=0;i<n;i++)
#define REPS(i,f,n) for(int i=(f);i<(n);i++)
#define EACH(it,v) for(__typeof((v).begin()) it=(v).begin();it!=(v).end();it++)

#define dump(x)  cout << #x << " = " << (x) << endl;
#define debug(x) cout << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
#define arrdump(n,a) for(int i=0;i<n;i++) {cout<<((i>0)? " ":"")<<a[i];}cout<<"\n";


typedef pair<int, int> P;
typedef pair<ll, ll> LP;
typedef pair<int, P> PP;
typedef pair<ll, LP> LPP;

int dy4[]={0, 0, 1, -1};
int dx4[]={1, -1, 0, 0};
int dx8[]={0, 0, 1, -1, 1, 1, -1, -1};
int dy8[]={1, -1, 0, 0, 1, -1, -1, 1};

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_3_A&lang=jp

int top = 0;
int stk[100005];

static void push(int x) {
    stk[++top] = x;
}

static int pop() {
    return stk[top--];
}

int main() {

    char c[50];
    int a, b;
    while(scanf("%s", c) != EOF) {
        char op = c[0];
        if (op == '+') {
            a = pop();
            b = pop();
            push(a+b);
        }
        else if (op == '-') {
            a = pop();
            b = pop();
            push(b-a);
        }
        else if (op == '*') {
            a = pop();
            b = pop();
            push(b*a);
        }
        else {
            push(atoi(c));
        }
    }

    cout << pop() << "\n";

    return 0;
}

