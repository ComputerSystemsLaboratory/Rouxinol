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
    string s,p;
    cin >> s >> p;
    ll n=s.size();
    s += s;
    bool yes=false;
    rep(i,n) if(s.substr(i,p.size()) == p) yes=true;
    if(yes) cout << "Yes" << endl;
    else cout << "No" << endl;
}
