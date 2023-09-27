#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define REP3(i,x,n) for(int i=x; i>(n); i--)
#define ALL(n) begin(n),end(n)
#define MAX 500000
#define SENTINEL 2000000000
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
ll L[MAX/2+2],R[MAX/2+2];
ll cnt=0,sum=0;
void merge(ll A[],ll n,ll left,ll mid ,ll right){
    ll n1 = mid   - left;
    ll n2 = right - mid;
    REP(i,n1)L[i] = A[left+i];
    REP(i,n2)R[i] = A[mid+i];
    L[n1] = R[n2] = SENTINEL;
    ll i = 0,j = 0;
    REP2(k,left,right){
        cnt++;
        if(L[i]<=R[j]){
            A[k] = L[i++];
        }else{
            A[k] = R[j++];
            sum+=n1-i;
        }
    }
}
void mergeSort(ll A[],ll n,ll left,ll right){
    if(left+1<right){
        ll mid = (left+right)/2;
        mergeSort(A,n,left,mid);
        mergeSort(A,n,mid,right);
        merge(A,n,left,mid,right);
    }
}
int main(){
    ll N,a,b;
    cin >> N;
    ll A[MAX];
    REP(i,N){
        cin >> A[i];
    }
    mergeSort(A,N,0,N);
    cout << sum << endl;
    return 0;
}
