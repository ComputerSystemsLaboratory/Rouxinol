#define DEBUG 0

#include <bits/stdc++.h>
using namespace std;

#if DEBUG
// basic debugging macros
int __i__,__j__;
#define printLine(l) for(__i__=0;__i__<l;__i__++){cout<<"-";}cout<<endl
#define printLine2(l,c) for(__i__=0;__i__<l;__i__++){cout<<c;}cout<<endl
#define printVar(n) cout<<#n<<": "<<n<<endl
#define printArr(a,l) cout<<#a<<": ";for(__i__=0;__i__<l;__i__++){cout<<a[__i__]<<" ";}cout<<endl
#define print2dArr(a,r,c) cout<<#a<<":\n";for(__i__=0;__i__<r;__i__++){for(__j__=0;__j__<c;__j__++){cout<<a[__i__][__j__]<<" ";}cout<<endl;}
#define print2dArr2(a,r,c,l) cout<<#a<<":\n";for(__i__=0;__i__<r;__i__++){for(__j__=0;__j__<c;__j__++){cout<<setw(l)<<setfill(' ')<<a[__i__][__j__]<<" ";}cout<<endl;}

// advanced debugging class
// debug 1,2,'A',"test";
class _Debug {
    public:
        template<typename T>
        _Debug& operator,(T val) {
            cout << val << endl;
            return *this;
        }
};
#define debug _Debug(),
#else
#define printLine(l)
#define printLine2(l,c)
#define printVar(n)
#define printArr(a,l)
#define print2dArr(a,r,c)
#define print2dArr2(a,r,c,l)
#define debug
#endif

// define
#define MAX_VAL 999999999
#define MAX_VAL_2 999999999999999999LL
#define EPS 1e-6
#define mp make_pair
#define pb push_back

// typedef
typedef unsigned int UI;
typedef long long int LLI;
typedef unsigned long long int ULLI;
typedef unsigned short int US;
typedef pair<int,int> pii;
typedef pair<LLI,LLI> plli;
typedef vector<int> vi;
typedef vector<LLI> vlli;
typedef vector<pii> vpii;
typedef vector<plli> vplli;

// ---------- END OF TEMPLATE ----------

LLI A[200];
char S[200];

// from https://codeforces.com/blog/entry/68953
const int d = 62;
LLI basis[d]; // basis[i] keeps the mask of the vector whose f value is i

int sz; // Current size of the basis

int insertVector(LLI mask) {
    for (int i = 0; i < d; i++) {
        if ((mask & 1LL << i) == 0) continue; // continue if i != f(mask)

        if (!basis[i]) { // If there is no basis vector with the i'th bit set, then insert this vector into the basis
            basis[i] = mask;
            ++sz;

            return 1;
        }

        mask ^= basis[i]; // Otherwise subtract the basis vector from this vector
    }
    return 0;
}
int main() {
    int i;
    int T,N;
    scanf("%d",&T);
    while (T--) {
        scanf("%d",&N);
        for (i = 0; i < N; i++) scanf("%lld",&A[i]);
        for (i = 0; i < N; i++) scanf(" %c",&S[i]);

        sz = 0;
        int f = 0;
        memset(basis,0,sizeof(basis));
        for (i = N-1; i >= 0; i--) {
            if (S[i] == '0') insertVector(A[i]);
            else if (insertVector(A[i])) {
                f = 1;
                break;
            }
        }
        printf("%d\n",f);
    }

    return 0;
}

