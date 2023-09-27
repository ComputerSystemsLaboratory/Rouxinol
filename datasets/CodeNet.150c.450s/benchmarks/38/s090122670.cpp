#include <iostream>

#define reep(i,n,m) for(int i=(n);i<(m);i++)
#define rep(i,n) reep(i,0,n)

#define pow(x) (x)*(x)

using namespace std;

void solve(){
    int a[3];
    rep(i,3){
        cin >> a[i];
    }

    rep(i,3){
        if(pow(a[i])==pow(a[(i+1)%3])+pow(a[(i+2)%3])){
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
}

int main(){
    int n;
    cin >> n;
    while(n--){
        solve();
    }

}