#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long ;
int main(){
    vector<int> kotae(1000000);
    for(int x=1; x<=100; x++){
        for(int y=1; y<=100; y++){
            for(int z=1; z<=100; z++){
                kotae[x*x+y*y+z*z+x*y+y*z+z*x]++;
            }
        }
    }
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        cout << kotae[i] << endl;
    }
    
}