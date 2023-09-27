#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(ll i=0; i<(n); i++)
#define REP2(i,x,n) for(ll i=x; i<(n); i++)
#define REP3(i,x,n) for(ll i=x; i>(n); i--)
#define ALL(n) begin(n),end(n)
#define MAX 500000
#define SENTINEL 2000000000
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
struct Card{
    char suit;
    int value;
};

struct Card L[MAX/2+2],R[MAX/2+2];

void merge(struct Card A[],ll n,ll left,ll mid ,ll right){
    ll n1 = mid   - left;
    ll n2 = right - mid;
    REP(i,n1)L[i] = A[left+i];
    REP(i,n2)R[i] = A[mid+i];
    L[n1].value = R[n2].value = SENTINEL;
    ll i = 0,j = 0;
    REP2(k,left,right){
        
        if(L[i].value<=R[j].value){
            A[k] = L[i++];
        }else{
            A[k] = R[j++];
        }
    }
}
void mergeSort(struct Card A[],ll n,ll left,ll right){
    
    if(left+1<right){
        ll mid = (left+right)/2;
        mergeSort(A,n,left,mid);
        mergeSort(A,n,mid,right);
        merge(A,n,left,mid,right);
    }
}
int partition(struct Card A[],int n,int p, int r){
    struct Card x,t;
    int i,j;
    x = A[r];
    i = p-1;
    for(j=p;j<r;j++){
        if(A[j].value <= x.value){
            i++;
            swap(A[i],A[j]);
        }
    }
    swap(A[i+1],A[r]);
    return i+1;
}

void quickSort(struct Card A[],int n,int p,int r){
    int q;
    if(p<r){
        q = partition(A,n,p,r);
        quickSort(A,n,p,q-1);
        quickSort(A,n,q+1,r);
    }
}
int main(){
    int n,i,v;
    struct Card A[MAX],B[MAX];
    char S[10];
    int stable = 1;
    cin >> n;
    REP(i,n){
        cin >> S >> v;
        A[i].suit = B[i].suit = S[0];
        A[i].value = B[i].value = v;
    }
    mergeSort(A,n,0,n);
    quickSort(B,n,0,n-1);

    REP(i,n){
        if(A[i].suit!=B[i].suit)stable=0;
    }
    if(stable==1) cout << "Stable" << endl;
    else cout << "Not stable" << endl;
    REP(i,n){
        cout << B[i].suit << " "<<B[i].value << endl;
    }
    return 0;
}
