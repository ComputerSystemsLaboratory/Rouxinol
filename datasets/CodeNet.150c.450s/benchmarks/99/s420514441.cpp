#include<bits/stdc++.h>
#define REP(i,n) for(int i=0;i<n;i++)
#define LOOP(i,x,n) for(int i=x;i<n;i++)
#define ALL(v) (v).begin(),(v).end()
#define PB push_back
#define MP make_pair
#define FR first
#define SC second
#define int long long
using namespace std;
const int MOD=1000000007;
const int INF=1000000009;


signed main(){
  int n;
  cin>>n;
  while(n--){
    string s,t;
    cin>>s>>t;
    int tmp=0;

    REP(i,s.size()){
      if(0<s[i]-'0'&&s[i]-'0'<10){
        if(s[i+1]=='m'){
          tmp+=(s[i]-'0')*1000;
          i++;
        }else if(s[i+1]=='c'){
          tmp+=(s[i]-'0')*100;
          i++;
        }else if(s[i+1]=='x'){
          tmp+=(s[i]-'0')*10;
          i++;
        }else if(s[i+1]=='i'){
          tmp+=(s[i]-'0');
          i++;
        }
      }else if(s[i]=='m')tmp+=1000;
      else if(s[i]=='c')tmp+=100;
      else if(s[i]=='x')tmp+=10;
      else if(s[i]=='i')tmp+=1;
    }
    REP(i,t.size()){
      if(0<t[i]-'0'&&t[i]-'0'<10){
        if(t[i+1]=='m'){
          tmp+=(t[i]-'0')*1000;
          i++;
        }else if(t[i+1]=='c'){
          tmp+=(t[i]-'0')*100;
          i++;
        }else if(t[i+1]=='x'){
          tmp+=(t[i]-'0')*10;
          i++;
        }else if(t[i+1]=='i'){
          tmp+=(t[i]-'0');
          i++;
        }
      }else if(t[i]=='m')tmp+=1000;
      else if(t[i]=='c')tmp+=100;
      else if(t[i]=='x')tmp+=10;
      else if(t[i]=='i')tmp+=1;
    }
    //cout<<tmp<<endl;
    if(tmp/1000>0){
      if(tmp/1000==1)cout<<'m';
      else cout<<tmp/1000<<'m';
    }
    tmp-=(tmp/1000)*1000;
    if(tmp/100>0){
      if(tmp/100==1)cout<<'c';
      else cout<<tmp/100<<'c';
    }
    tmp-=(tmp/100)*100;
    if(tmp/10>0){
      if(tmp/10==1)cout<<'x';
      else cout<<tmp/10<<'x';
    }
    tmp-=(tmp/10)*10;
    if(tmp>0){
      if(tmp==1)cout<<'i';
      else cout<<tmp<<'i';
    }
    cout<<endl;
  }
  return 0;
}

