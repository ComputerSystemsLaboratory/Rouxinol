#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
using namespace std;

int f(string const& s){
    int p=0;
    int res = 0;
    while(p<(int)s.size()){
        int n=0;
        while(isdigit(s[p])){
            n*=10;
            n+=s[p]-'0';
            p++;
        }
        if(n==0)n=1;
        char c = s[p];
        p++;
        if(c=='m')res+=1000*n;
        if(c=='c')res+=100*n;
        if(c=='x')res+=10*n;
        if(c=='i')res+=1*n;
    }
    return res;
}

string g(int n){
    string res;
    char c[]="ixcm";
    for(int i=0;i<4;i++){
        int k=n%10;
        n/=10;
        if(k==0) continue;
        res.push_back(c[i]);
        if(k!=1) res.push_back(k+'0');
    }
    reverse(res.begin(),res.end());
    return res;
}

int main(){
    int n;
    cin>>n;
    while(n--){
        string s,t;
        cin >> s >> t;
        cout << g(f(s)+f(t)) << endl;
        //cout << f(s) << " " << f(t) << endl;
    }
}