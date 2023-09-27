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

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_6_C&lang=jp

#define MAX 100005

struct Card {
    char suit;
    int value;
};

int N;
Card A[MAX];
Card B[MAX];

static void merge(int l, int mid, int r) {
    int n1 = mid - l;
    int n2 = r - mid;
    Card L[100005];
    Card R[100005];
    REP(i, n1) L[i] = B[l+i];
    REP(i, n2) R[i] = B[mid+i];
    L[n1].value = R[n2].value = INF;
    int i = 0; int j = 0;
    for (int k = l; k < r; k++) {
        if (L[i].value <= R[j].value) {
            B[k] = L[i++];
        } else {
            B[k] = R[j++];
        }
    }
}

static void mergeSort(int l, int r) {
    if (l+1 < r) {
        int mid = (l+r)/2;
        mergeSort(l, mid);
        mergeSort(mid, r);
        merge(l, mid, r);
    }
}

static int par(int l, int r) {
    int v = A[r].value;
    int j = l - 1;
    for (int i = l; i < r; i++) {
        if (A[i].value <= v) {
            j++;
            swap(A[j], A[i]);
        }
    }
    swap(A[r], A[j+1]);
    return j+1;
}

static void quick(int l, int r) {
    if (l < r) {
        int q = par(l, r);
        quick(l, q-1);
        quick(q+1, r);
    }
}

int main() {
    cin >> N;
    REP(i, N) {
        char n; cin >> n;
        int a; cin >> a;
        A[i] = {n, a};
        B[i] = {n, a};
    }
    mergeSort(0, N);
    quick(0, N-1);

    bool stable = true;
    REP(i, N) if (A[i].suit != B[i].suit) stable = false;
    cout << (stable?"Stable":"Not stable") << "\n";
    REP(i, N) {
        printf("%c %d\n", A[i].suit, A[i].value);
    }

    return 0;
}
