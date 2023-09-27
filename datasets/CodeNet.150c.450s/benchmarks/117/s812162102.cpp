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
#define INF (1e9)
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

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_5_B&lang=jp

#define MAX 1000005

int N;
int A[MAX];
int cnt;

static void merge(int l, int m, int r) {
    int n1 = m - l;
    int n2 = r - m;
    int L[n1+5], R[n2+5];
    REP(i, n1) L[i] = A[l+i];
    REP(i, n2) R[i] = A[m+i];
    L[n1] = R[n2] = INF;
    int i = 0, j = 0;

    for (int k = l; k < r; k++) {
        if (L[i] <= R[j]) {
            A[k] = L[i++];
        } else {
            A[k] = R[j++];
        }
        cnt ++;
    }
}

static void mergeSort(int l, int r) {
    if (l+1 < r) {
        int m = (l+r) /2;
        mergeSort(l, m);
        mergeSort(m, r);
        merge(l, m, r);
    }
}

int main() {
    cin >> N;
    REP(i, N) cin >> A[i];
    mergeSort(0, N);
    arrdump(N, A);
    cout << cnt << "\n";
    return 0;
}

