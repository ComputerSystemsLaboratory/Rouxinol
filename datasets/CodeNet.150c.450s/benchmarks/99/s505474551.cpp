#include <iostream>
#include <string>
using namespace std;
#define rep(i,b) for(int i=0; i<int(b); i++)

string tos(int n){
    string res;
    char c[]="ixcm";
    rep(i,4){
        int k=n%10;
        n/=10;
        if(k==0) continue;
        res.push_back(c[i]);
        if(k!=1) res.push_back(k+'0');
    }
    rep(i,res.size()/2) swap(res[i],res[res.size()-i-1]);
    return res;
}

int toi(string a) {
    int d[256]={};
    d['m'] = 1000;
    d['c'] = 100;
    d['x'] = 10;
    d['i'] = 1;
    int res=0;
    int n=1;
    rep(i,a.size()){
        char c=a[i];
        if(d[c]){
            res += n*d[c];
            n=1;
        }
        else n=c-'0';
    }
    return res;
}

int main(){
    int n; cin>>n;
    while(n--){
        string s,t; cin>>s>>t;
        cout << tos(toi(s)+toi(t)) << endl;
    }
}