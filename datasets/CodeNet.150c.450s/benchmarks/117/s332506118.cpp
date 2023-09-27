#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

#include <stack>
#include <queue>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;

typedef pair<int,int> P;
typedef long long lint;

#define MAXN 500005
int n,cnt;
int a[MAXN],b[MAXN];
void get_input() {
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
}
// ?量cnt用来?“比?次数”，?目中表述不是很明?
void merge(int beg,int end) {
    if(beg>=end) return;
    int mid=(beg+end)>>1;
    merge(beg,mid);
    merge(mid+1,end);
    int i,j,k;
    for(i=beg,j=mid+1,k=beg;i<=mid && j<=end;k++) {
        cnt++;
        if(a[i]<a[j]) {
            b[k]=a[i++];
        } else {
            b[k]=a[j++];
        }
    }
    for(;i<=mid;i++) {
        cnt++;
        b[k++]=a[i];
    }
    for(;j<=end;j++) {
        cnt++;
        b[k++]=a[j];
    }
    memcpy(a+beg,b+beg,sizeof(int)*(end-beg+1));

}

void solve() {
    merge(0,n-1);
}

void display_output() {
    printf("%d",a[0]);
    for(int i=1;i<n;i++) printf(" %d",a[i]);
    printf("\n%d\n",cnt);
}

int main() {
#ifdef debug
    freopen("in.txt","r",stdin);
#endif
    get_input();
    solve();
    display_output();
}