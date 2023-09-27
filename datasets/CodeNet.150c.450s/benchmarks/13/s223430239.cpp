#include <iostream>
#include <vector>
#include <algorithm>
 
#define rep(i, n) for(int i = 0; i < (n); ++i)
 
using namespace std;

int n, m;
string s, p;

int main(){
    cin >> s >> p;
    n = s.size();
    m = p.size();
    s += s;
    rep(i, n){
        if(p == string(s, i, m)){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}