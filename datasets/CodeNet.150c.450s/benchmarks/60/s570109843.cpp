#include<iostream>

using namespace std;

#define ll long long

int main(){
    ll n, u, k, v;
    cin >> n;
    ll A[n][n];
    for (ll i=0; i<n; i++){
        for(ll j=0; j<n; j++){
            A[i][j] = 0;
        }
    }
    for(ll i=0; i<n; i++){
        cin >> u;
        cin >> k;
        for(ll j=0; j<k; j++){
            cin >> v;
            A[u-1][v-1] = 1;
        }
    }

    for (ll i=0; i<n; i++){
        for(ll j=0; j<n; j++){
            cout << A[i][j];
            if(j<n-1){
                cout << ' ';
            }
        }
        cout << '\n';
        
    }
}