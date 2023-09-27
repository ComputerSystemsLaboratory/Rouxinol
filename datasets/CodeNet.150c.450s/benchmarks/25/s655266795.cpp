#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <map>
#include <list>
#include <cctype>
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<(n);i++)

locale l = locale::classic();

int main(){
    ll a[26]={0};
    while(1){
        string s;
        cin >> s;
        if(cin.eof()) break;
        rep(k,s.size()){
        rep(i,26){
            char c = 'a' + i;
            if(s[k] == c) a[i]++;
            c = 'A' + i;
            if(s[k] == c) a[i]++;
        }
        }
    }
    rep(i,26){
        char c = 'a' + i;
        cout << c << " : " << a[i] << endl;
    }
}
