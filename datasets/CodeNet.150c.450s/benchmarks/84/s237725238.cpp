#include<bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<n;i++)
#define all(x) x.begin(),x.end()
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int INF = 1001001001;
ll cnt;
//merge sort
void out(int a[],int n){
    rep(j,n){
        cout << a[j];
        if(j!=n-1) cout << " ";
    }
    cout << endl;
}

void merge(int *A, int left, int mid, int right){
    int n1 = mid - left;
    int n2 = right - mid;
    vector<int> L(n1+1),R(n2+1);
    rep(i,n1) L[i] = A[left + i];
    rep(i,n2) R[i] = A[mid + i];
    L[n1] = INF; R[n2] = INF;
    int i = 0, j = 0;
    for(int k=left;k<right;k++){
        if(L[i] <= R[j]){
            A[k] = L[i];
            i++;
        }else{
            cnt += n1 -i;
            A[k] = R[j];
            j++;
        }
    }
}

void mergeSort(int *A, int left, int right){

    if(left+1 < right){
        int mid = (left+right) / 2;
        mergeSort(A,left,mid);
        mergeSort(A,mid,right);
        merge(A,left,mid,right);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int s[n];
    rep(i,n) cin >> s[i];

    cnt = 0;
    mergeSort(s, 0, n);
    cout << cnt << endl;


    return 0;
}

