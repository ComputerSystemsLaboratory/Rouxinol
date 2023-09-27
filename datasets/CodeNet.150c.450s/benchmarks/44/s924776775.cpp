#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
#define INF 1000000
using namespace std;
int main(){
    vector<int> a(4);
    vector<int> b(4);
    while(cin >> a[0] >> a[1] >> a[2] >> a[3]){
        rep(i,4) cin >> b[i];
        int hit = 0,blow = 0;
        rep(i,4){
            if(a[i] == b[i]) hit++;
            else {
                rep(j,4) if(a[j] == b[i]) blow++;
            }
        }
        cout << hit << " " << blow << endl;
    }
    return 0;
}
