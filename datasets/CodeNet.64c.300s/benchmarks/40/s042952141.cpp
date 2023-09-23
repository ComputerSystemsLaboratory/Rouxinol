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
    bool again=false;
    while(1){
    string s;
    cin >> s;
    if(cin.eof()) break;
    if(again) cout << ' ';
    rep(i,s.size()){
        if(isupper(s[i])) cout << tolower(s[i],l);
        else if(islower(s[i])) cout << toupper(s[i],l);
        else cout << s[i];
    }
    again=true;
    }
    cout << endl;
}
