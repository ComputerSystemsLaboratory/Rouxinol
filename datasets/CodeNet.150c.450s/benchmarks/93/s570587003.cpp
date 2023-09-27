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

ll partition(pair<char,ll> A[], ll p, ll r){
    ll x = A[r].second;
    ll i = p-1;
    for(ll j = p; j < r;j++){
        if(A[j].second <= x){
            i = i+1;
            swap(A[i],A[j]);
        }
    }
    swap(A[i+1],A[r]);
    return i+1;
}

void quickSort(pair<char,ll> A[], ll p, ll r){
    if(p < r){
        ll q = partition(A, p, r);
        quickSort(A,p,q-1);
        quickSort(A,q+1,r);
    }
}

int main(){
    
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n;
    cin >> n;
    pair<char,ll> A[n];
    map<ll,list<char> > a;
    for(int i = 0; i < n;i++){
        cin >> A[i].first >> A[i].second;
        a[A[i].second].push_back(A[i].first);
    }

    quickSort(A,0,n-1);

    bool isStable = true;

    for(int i = 0; i < n;i++){
        if(A[i].first != a[A[i].second].front()){
            isStable = false;
            break;
        }
        a[A[i].second].pop_front();
    }
    
    if(isStable) cout << "Stable" << endl;
    else cout << "Not stable" << endl;
    for(int i = 0; i < n;i++){
        cout << A[i].first <<  " " << A[i].second << endl;
    }


    return 0;
}
