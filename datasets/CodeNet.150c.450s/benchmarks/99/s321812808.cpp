#include <iostream>
#include <string>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)

int f(string s){
    int n=s.size();
    int ret = 0;
    int t=1;
    for(int i=0;i<n;i++){
        if(s[i]>='0' && s[i]<='9'){
            t = s[i]-'0';
        }
        if(s[i]=='m'){
            ret += t*1000;
            t=1;
        }
        if(s[i]=='c'){
            ret += t*100;
            t=1;
        }
        if(s[i]=='x'){
            ret += t*10;
            t=1;
        }
        if(s[i]=='i'){
            ret += t*1;
            t=1;
        }
    }
    return ret;
}

string f2(int n){
    string ret;
    int m=n/1000;
    n %= 1000;
    int c=n/100;
    n %= 100;
    int x=n/10;
    n %= 10;
    int i=n;
    if(m!=0){
        if(m!=1)
            ret += m+'0';
        ret += "m";
    }
    if(c!=0){
        if(c!=1)
            ret += c+'0';
        ret += "c";
    }
    if(x!=0){
        if(x!=1)
            ret += x+'0';
        ret += "x";
    }
    if(i!=0){
        if(i!=1)
            ret += i+'0';
        ret += "i";
    }
    return ret;
}

void solve(){
    string s1,s2;
    cin >> s1 >> s2;
//    cout <<f(s1) << " : " << f(s2) << endl;
    int N = f(s1) + f(s2);
    cout << f2(N) << endl;
}


int main(){
    int n;
    cin >> n;
    rep(i,n){
        solve();
    }
}