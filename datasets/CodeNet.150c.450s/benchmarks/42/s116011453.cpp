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

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_3_B&lang=jp

#define MAX 100005

struct PS
{
    string name;
    int time;
};

int tail, head;
PS p[MAX];

static void enq(PS x) {
    p[tail] = x;
    tail = (tail + 1) % MAX;
}

static PS deq() {
    PS x = p[head];
    head = (head + 1) % MAX;
    return x;
}

int main() {
    int n, q;
    cin >> n >> q;
    REP(i, n) {
        string na;
        int t;
        cin >> na >> t;
        enq({na, t});
    }

    int elapse = 0;
    while(tail != head) {
        PS ps = deq();
        int c = min(q, ps.time);
        ps.time -= c;
        elapse += c;
        if (ps.time > 0) {
            enq({ps.name,ps.time});
        }
        else {
            printf("%s %d\n", ps.name.c_str(), elapse);
        }
    }

    return 0;
}

