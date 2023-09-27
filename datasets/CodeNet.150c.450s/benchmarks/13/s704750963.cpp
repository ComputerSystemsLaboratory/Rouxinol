#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
#include <iomanip>
#include <functional>
#include <queue>
#include <stack>
#include <map>
#include <vector>
#include <cmath>
#define ll long long
#define INF 10000000000000000
#define MOD 998244353
using namespace std;


int main(){
    string s;
    cin >> s;
    int l=s.length();
    s+=s;
    
    string p;
    cin >> p;
    for(int i=0; i<l; i++){
        int ok=1;
        for(int j=0; j<p.length(); j++){
            if(s[i+j]!=p[j]){
                ok=0;
            }
        }
        if(ok==1){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    
    return 0;
}

