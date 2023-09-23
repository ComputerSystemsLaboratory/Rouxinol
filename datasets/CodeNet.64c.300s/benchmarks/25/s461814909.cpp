#include <iostream>
#define rep(i, a, n) for(int i = a; i < n; i++)
using namespace std;

int main(){
    int a[4], b[4];
    while(1){
        rep(i, 0, 4) cin >> a[i];
        rep(i, 0, 4) cin >> b[i];
        if(cin.eof()) break;        
        bool f[4];
        rep(i, 0, 4) f[i] = false;
        int hit = 0, blow = 0;
        rep(i, 0, 4){
            if(a[i] == b[i]){
                hit++; f[i] = true;
            }
        }
        rep(i, 0, 4){
            if(f[i]) continue;
            rep(j, 0, 4){
                if(a[i] == b[j]) blow++;
            }
        }
        cout << hit << " " << blow << endl;
    }
}