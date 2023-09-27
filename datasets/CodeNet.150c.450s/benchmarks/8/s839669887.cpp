#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug" << x << endl;
using namespace std;

int main(){
    int n;
    while(cin >> n){
        int taro = 0, hanako = 0;
        rep(i,n){
            string a,b;
            cin >> a >> b;
            if(a > b) taro+= 3;
            else if(a < b) hanako+= 3;
            else {
                taro++; hanako++;
            }
        }
        cout << taro << ' ' << hanako << endl;
    }
}