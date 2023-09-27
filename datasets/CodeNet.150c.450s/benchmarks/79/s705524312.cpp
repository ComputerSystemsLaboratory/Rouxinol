#include <iostream>
#include <map>
#include <string>

using namespace std;

#define loop(i,a,b) for(int i=(a); i<(int)(b); i++)
#define rep(i,b) loop(i,0,b)

int main(){
    int n,r;
    while(cin >> n >> r && n){
        string s(n,0);
        rep(i,n) s[n-i-1] = i+1;
        rep(i,r){
            int p,c;
            cin >> p >> c;
            s = s.substr(p-1,c) + s.substr(0,p-1) + s.substr(p-1+c);
        }
        cout << (int)s[0] << endl;
    }
}