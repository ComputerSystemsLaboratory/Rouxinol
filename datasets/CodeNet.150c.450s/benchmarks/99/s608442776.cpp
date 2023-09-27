#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(long long int i=0;i<n;++i)
typedef long long int ll;

string x="mcxi";
int y[]={1000,100,10,1};

int deco(string t){
    int ret=0;
    int tt=1;
    for(int i=0;i<t.size();i++){
        int f=-1;
        for(int j=0;j<4;j++){
            if(t[i]==x[j]){
                f=j;
                break;
            }
        }
        if(f==-1){
            tt=t[i]-'0';
        }else{
            ret+=tt*y[f];
            tt=1;
        }
    }

    return ret;
}

string enco(int n){
    string ret="";
    for(int i=0;i<4;i++){
        int t=n/y[i];
        n%=y[i];
        if(t==0){
            continue;
        }else if(t==1){
            ret+=x[i];
        }else{
            ret+=to_string(t)+x[i];
        }
    }
    return ret;
}

int main(){

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string s,t;
        cin >> s >> t;
        int ss=deco(s);
        int tt=deco(t);
        int st=ss+tt;
        string ans=enco(st);
        cout << ans << endl;
    }

    return 0;
}
