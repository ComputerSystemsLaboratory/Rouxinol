#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_set>

#define REP(i, x, n) for(int i = x; i < n; i++)
#define rep(i,n) REP(i,0,n)

using namespace std;

int main(){
    unordered_set<string> dic;
    int n; cin >> n;

    string s, t;
    rep(i,n){
        cin >> s >> t;
        if(s[0] == 'i'){
            dic.insert(t);
        }else if(s[0] == 'f'){
            if(dic.count(t) > 0){
                cout << "yes" << endl;
            }else{
                cout << "no" << endl;
            }
        } 
    } 

    return 0;
}