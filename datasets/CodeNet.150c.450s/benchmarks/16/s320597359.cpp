#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> P;
string s;

int getarea(int a,int b){
  int res=0,h=0;
  stack<P> st;
  for(int i=a;i<=b;i++){
    if(s[i]=='\\')st.push(P(h,i)),h--;
    if(s[i]=='/'){
      h++;
      if(!st.size())continue;
      P t=st.top();
      if(t.first==h)res+=i-t.second,st.pop();
    }
  }
  return res;
}

int check(int x){
  int h=0;
  for(int i=x;i<s.size();i++){
    if(s[i]=='\\')h--;
    if(s[i]=='/'){
      h++;
      if(!h)return i;
    }
  }
  return -1;
}

int main(){
  int h=0,ans=0;
  vector<int> v;
  cin>>s;
  for(int i=0;i<s.size();i++)
    if(s[i]=='\\'){
      int r=check(i);
      if(r>=0){
	int area=getarea(i,r);
	v.push_back(area);
	ans+=area,i=r-1;
      }
    }
  cout<<ans<<endl;
  cout<<v.size();
  if(v.size())cout<<' ';
  for(int i=0;i<v.size();i++){
    if(i)cout<<' ';
    cout<<v[i];
  }
  cout<<endl;
  return 0;
}