#include <cstdio>
#include <vector>
typedef long long ll;

#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

using namespace std;

int A[999999], T[999999];

ll dc(int l, int r) { 
    if (l+1 >= r) return 0; 
    else if (l+2 == r) { 
        if (A[l] <= A[l+1]) return 0; 
        swap(A[l], A[l+1]);
        return 1; 
    } else {
        int m = (l+r)/2;
        ll cl = dc(l, m);
        ll cr = dc(m, r);
        ll c = 0;
        int i=l, j=m, k=l;
        while (i<m && j<r) { 
            if (A[i] <= A[j]) T[k++] = A[i++]; 
            else {
                T[k++] = A[j++];
                c += m-i; 
            }
        }
        while (i<m) T[k++] = A[i++]; 
        while (j<r) T[k++] = A[j++]; 
        copy(T+l, T+r, A+l);
        return cl + cr + c;
    }
}
int main(){
    int i,n;
    scanf("%d",&n);
    rep(i,n) scanf("%d",A+i); printf("%lld\n",dc(0,n));
}