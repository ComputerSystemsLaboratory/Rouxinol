#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <map>
#include <set>
#include <string>
#include <cstring>
#include <sstream>
#include <cmath>
#include <functional>
#include <fstream>
#include <cstdlib>
typedef long long ll;
const int MOD = 1e9+7;


#define REP(i, N) for (int i = 0; i < (N); i++)
#define REPP(i, a, b) for (int i = (a); i < (b); i++)
#define ALL(v) (v).begin(), (v).end()
#define RALL(v) (v).rbegin(), (v).rend()
#define VSORT(c) sort((c).begin(),(c).end())
#define SZ(x) ((int)(x).size())
//vvintを作る　マクロで　 #define vvint(N,M) vector<vector<int>>

using namespace std;
vector<ll> L(100001),R(100001),A(200001);
ll ans = 0;

ll bubbleSort(vector<ll> A){
    ll cnt = 0;
    for(int i = 0; i < A.size()-1;i++){
        for(int j = A.size()-1; j > i;j--){
            if(A[j] < A[j-1]){
                swap(A[j],A[j-1]);
                cnt++;
            }
        }
    }
    return cnt;
}

void merge(ll l, ll mid, ll r){
    ll n1 = mid - l;
    ll n2 = r - mid;
    for(int i = 0; i < n1;i++){
        L[i] = A[l+i];
    }
    for(int i = 0; i < n2;i++){
        R[i] = A[mid+i];
    }
    L[n1]=MOD;R[n2]=MOD;
    int cntl=0,cntr=0;
    for(int i = l; i < r;i++){
        if(L[cntl] > R[cntr]){
            A[i] = R[cntr];
            cntr++;
            // cout << L[cntl] << " : r : " << R[cntr-1] << " **  " << n1-cntl << endl;
            // cout << n1 << " : " <<  cntl << " : "<< n1-cntl << endl;
            ans += n1-cntl;
        }else{
            A[i] = L[cntl];
            cntl++;
        }
    }
}

void mergeSort(ll l, ll r){
    if(l+1 <  r){
        ll mid = (l+r)/2;
        mergeSort(l,mid);
        mergeSort(mid,r);
        merge(l,mid,r);
    }
    
}

int main(){
    
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    for(int i = 0; i < n;i++){
        cin >> A[i];
    }

    // ll cnt = bubbleSort(a);
    // cout << cnt << endl;
    mergeSort(0,n);
    cout << ans << endl;
    return 0;
}
