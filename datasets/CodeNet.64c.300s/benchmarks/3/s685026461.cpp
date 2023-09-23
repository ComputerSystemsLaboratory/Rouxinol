#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug" << x << endl;
using namespace std;

int main(){
    int n, num[105];
    while(cin >> n){
        rep(i,n){
            cin >> num[i];
        }
        for(int i = n - 1; i >= 0; i--){
            if(i != n - 1) cout << ' ';
             cout << num[i];
        }
        cout << endl;
    }
}