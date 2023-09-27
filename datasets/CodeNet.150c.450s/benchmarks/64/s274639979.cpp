#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

#define REP(i, x, n) for(int i=x; i<n; i++)
#define rep(i,n) REP(i,0,n)

using namespace std;

int n;
int A[2000];

int solve(int i, int m){
    if(m == 0) return true;
    if(i >= n) return false;
    return solve(i+1,m) || solve(i+1, m - A[i]);
}


int main(){
    cin >> n;
    rep(i,n) cin >> A[i];

    int q; cin >> q;
    int m;
    for(int i=0; i<q; i++){
        cin >> m;
        if(solve(0,m)){
            cout << "yes" << endl;
        }else{
            cout << "no" << endl;
        } 
    }
    
    return 0;
}