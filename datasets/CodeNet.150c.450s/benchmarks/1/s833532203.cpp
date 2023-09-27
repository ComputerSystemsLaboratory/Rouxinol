#include <bits/stdc++.h>
using namespace std;

struct edge {int to,cost;};
typedef long long ll;
typedef pair<int,int> P;
typedef vector<int> VI;
typedef vector<long long int> VL;
typedef vector<edge> VE;
//static const int INF = 2147483647;
//static const int INf = 9223372000000000000;
//static const long long INF = 9223372000000000000/2;
static const int INF = 1000000000;
static const int NIL = -1;
static const int MOD = 1000000007;
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define np next_permutation
#define pq priority_queue
#define itn int
#define scnaf scanf
#define reutnr return
#define scamf scanf
//int dx4[4] = {0,1,0,-1}, dy4[4] = {-1,0,1,0};
//int dx5[5] = {-1,0,0,0,1}, dy5[5] = {0,-1,0,1,0};
//int dx8[8] = {-1,0,1,1,1,0,-1,-1}, dy8[8] = {1,1,1,0,-1,-1,-1,0};
//int dx9[9] = {-1,0,1,1,1,0,-1,-1,0}, dy9[9] = {1,1,1,0,-1,-1,-1,0,0};
//#define int ll

const int MAX = 114514;

int n,A[MAX],L[MAX];

int lis(){
    L[0] = A[0];
    int length = 1;

    for(int i=1;i<n;i++){
        if(L[length-1]<A[i]) L[length++] = A[i];
        else *lower_bound(L,L+length,A[i]) = A[i];
    }

    return length;
}

signed main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&A[i]);
    printf("%d\n",lis());
    return 0;
}