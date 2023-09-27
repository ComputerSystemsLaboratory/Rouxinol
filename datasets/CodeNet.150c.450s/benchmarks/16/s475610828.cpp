#include<bits/stdc++.h>
#define r(i,n) for(int i=0;i<n;i++)
using namespace std;
int imos1[200009],imos2[200009],ans,sum,SUM;
vector<int>v;
string s;
stack<int>st;
int main(){
  cin>>s;
  r(i,s.size()){
    if(s[i]=='_')continue;
    if(s[i]=='\\')st.push(i);
    if(s[i]=='/'){
      if(st.empty())continue;
      int x=st.top();st.pop();
      imos1[x]+=(i-x);
      imos2[i]-=(i-x);
    }
  }
  r(i,200009){
    sum+=imos1[i];
    ans+=imos1[i];
    sum+=imos2[i];
    if(sum==0){
      SUM+=ans;
      if(ans!=0)v.push_back(ans),ans=0;
    }
  }
  cout<<SUM<<endl<<v.size();
  r(i,v.size()) cout<<' '<<v[i];
  cout<<endl;
}
