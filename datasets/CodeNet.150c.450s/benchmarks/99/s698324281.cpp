#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   FOR(i,0,n)
#define pb emplace_back
typedef long long ll;
typedef pair<int,int> pint;

int main(){
    int n;
    cin>>n;
    string s,t;
    while(n--){
        cin>>s>>t;
        int si=0;
        rep(i,s.size()){
            if(isdigit(s[i])){
                if(s[i+1]=='m') si+=1000*(s[i]-'0');
                if(s[i+1]=='c') si+=100*(s[i]-'0');
                if(s[i+1]=='x') si+=10*(s[i]-'0');
                if(s[i+1]=='i') si+=1*(s[i]-'0');
                ++i;
            }
            else{
                if(s[i]=='m') si+=1000;
                if(s[i]=='c') si+=100;
                if(s[i]=='x') si+=10;
                if(s[i]=='i') si+=1;
            }
        }
        int ti=0;
        rep(i,t.size()){
            if(isdigit(t[i])){
                if(t[i+1]=='m') ti+=1000*(t[i]-'0');
                if(t[i+1]=='c') ti+=100*(t[i]-'0');
                if(t[i+1]=='x') ti+=10*(t[i]-'0');
                if(t[i+1]=='i') ti+=1*(t[i]-'0');
                ++i;
            }
            else{
                if(t[i]=='m') ti+=1000;
                if(t[i]=='c') ti+=100;
                if(t[i]=='x') ti+=10;
                if(t[i]=='i') ti+=1;
            }
        }
        int sum=si+ti;
        string ans;
        if(sum/1000>1) ans+=(char)('0'+sum/1000),ans+='m';
        if(sum/1000==1) ans+='m';
        sum%=1000;
        if(sum/100>1) ans+=(char)('0'+sum/100),ans+='c';
        if(sum/100==1) ans+='c';
        sum%=100;
        if(sum/10>1) ans+=(char)('0'+sum/10),ans+='x';
        if(sum/10==1) ans+='x';
        sum%=10;
        if(sum>1) ans+=(char)('0'+sum),ans+='i';
        if(sum==1) ans+='i';
        cout<<ans<<endl;
    }
    return 0;
}
