#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i =0;i<(int)(n);i++)
#define endl '\n'
typedef pair<int,int> P;
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> cnt(100000);
    for(int x=1;x<=100;x++){
        for(int y=1;y<=100;y++){
            for(int z = 1;z<=100;z++){
                cnt[x*x+y*y+z*z+x*y+x*z+y*z]++;
            }
        }
    }
    for(int i =1;i<=n;i++){
        cout << cnt[i] << endl;
    }
}