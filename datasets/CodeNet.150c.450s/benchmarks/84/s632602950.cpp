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
#include <stack>
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

#define MAX 500000
#define SENTINEL 2000000000
int L[MAX/2+2],R[MAX/2+2];

ll merge(int *a,int n, int l,int mid,int r) {
    ll cnt=0;
    int n1=mid-l;
    int n2=r-mid;
    rep(i,n1) L[i]=a[l+i];
    rep(i,n2) R[i]=a[mid+i];
    L[n1]=R[n2]=SENTINEL;
    int i,j;
    i=j=0;
    for(int k=l;k<r;k++) {
        if(L[i]<=R[j]) a[k]=L[i++];
        else a[k]=R[j++],cnt+=n1-i;
    }
    return cnt;
}
ll merge_sort(int *a,int n,int l,int r) {
    ll v1,v2,v3;
    if(l+1<r) {
        int mid=(l+r)/2;
        v1=merge_sort(a,n,l,mid);
        v2=merge_sort(a,n,mid,r);
        v3=merge(a,n,l,mid,r);
        return v1+v2+v3;
    }
    else return 0;
}

int a[MAX];
int main() {
    int n;
    cin>>n;
    rep(i,n) cin>>a[i];

    ll ans = merge_sort(a,n,0,n);
    cout<<ans<<endl;
    return 0;
}