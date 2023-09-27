#include "bits/stdc++.h"

using namespace std;

string calc(string s,string t){
    int a=0,b=0;
    int k=1;
    for(int i=0;i<(int)s.length();i++){
        if(s[i]=='m'){a+=k*1000;k=1;}
        else if(s[i]=='c'){a+=k*100;k=1;}
        else if(s[i]=='x'){a+=k*10;k=1;}
        else if(s[i]=='i'){a+=k;k=1;}
        else k=s[i]-'0';
    }
    for(int i=0;i<(int)t.length();i++){
        if(t[i]=='m'){b+=k*1000;k=1;}
        else if(t[i]=='c'){b+=k*100;k=1;}
        else if(t[i]=='x'){b+=k*10;k=1;}
        else if(t[i]=='i'){b+=k;k=1;}
        else k=t[i]-'0';
    }
    //cout<<a<<" "<<b<<endl;
    int su=a+b;
    string ret="";
    int tmp=su/1000;
    if(tmp==1) ret+="m";
    else if(tmp>1) ret=ret+to_string(tmp)+"m";
    su%=1000;
    tmp=su/100;
    if(tmp==1) ret+="c";
    else if(tmp>1) ret=ret+to_string(tmp)+"c";
    su%=100;
    tmp=su/10;
    if(tmp==1) ret+="x";
    else if(tmp>1) ret=ret+to_string(tmp)+"x";
    su%=10;
    tmp=su;
    if(tmp==1) ret+="i";
    else if(tmp>1) ret=ret+to_string(tmp)+"i";

    return ret;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

    int n;cin>>n;
    for(int i=0;i<n;i++){
        string s,t;cin>>s>>t;
        cout<<calc(s,t)<<endl;
    }
}