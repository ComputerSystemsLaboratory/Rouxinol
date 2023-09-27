#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
constexpr int di[] = { 0, 1, 0, -1 }, dj[] = { 1, 0, -1, 0 };
#define rep(i, n) for (int i = 0; i < n; i++)
#define repr(i, n) for (int i = n; i >= 0; i--)
#define sort(v) sort((v).begin(), (v).end())
#define sortr(v) sort((v).rbegin(), (v).rend())
#define all(v) (v).begin(), (v).end()
#define MAX 200001
#define vmax 10000
#define sentinel 2000000000
constexpr long long int inf = 1000000000000;
constexpr long long int rinf = -(INT64_MAX);
/*cout<<fixed<<setprecision(20);cin.tie(0);ios::sync_with_stdio(false);*/

int r[MAX/2+2],l[MAX/2+2];

ll merge(int a[],int left,int mid,int right){
    int n1=mid -left;
    int n2=right-mid;
    long long int cnt=0;
    for(int i=0;i<n1;i++){
        l[i]=a[left+i];
    }
    for(int i=0;i<n2;i++){
        r[i]=a[mid+i];
    }
    l[n1]=r[n2]=sentinel;
    int i=0,j=0;
    for(int k=left;k<right;k++){
        if(l[i]<=r[j]){
            a[k]=l[i];
            i++;
        }else{
            a[k]=r[j];
            j++;
            cnt+=n1-i;
        }
    }
    return cnt;
}

ll mergesort(int a[],int left,int right){
    int mid=(left+right)/2;
    ll v1,v2,v3;
    if(right-left>1){
        v1=mergesort(a,left,mid);
        v2=mergesort(a,mid,right);
        v3=merge(a,left,mid,right);
        return v1+v2+v3;
    }else return 0;
}

int main() {
    int a[MAX],n;
    ll cnt;
    cin>>n;
    rep(i,n) cin>>a[i];
    cnt=mergesort(a,0,n);
    cout<<cnt<<endl;
}

