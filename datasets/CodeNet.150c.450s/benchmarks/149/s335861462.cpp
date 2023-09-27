#include <iostream>
#define FOR(i,k,n) for (int (i)=(k); (i)<(n); ++(i))
#define REP(i,n) FOR(i,0,n)
using namespace std;

int S[10000];
int root(int i){
    if(S[i] == i) return i;
    else return S[i] = root(S[i]);
}

int main(){
    int n,q,com,x,y;
    cin >> n >> q;
    REP(i,n){
        S[i] = i;
    }
    REP(i,q){
        cin >> com >> x >> y;
        if(com){ // same
            bool same = (root(S[x]) == root(S[y]));
            cout << same << endl;
        }
        else{ // unite
            S[root(x)] = root(y);
        }
    }
    return 0;
}