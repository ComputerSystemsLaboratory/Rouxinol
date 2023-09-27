#include<bits/stdc++.h>
using namespace std;
typedef pair<double,string> pd;
#define MK make_pair

int make(string s){
  int a=0;
  for(int i=0;i<s.size();i++){
    a+=(int)(s[s.size()-1-i]-'0')*pow(10,i);
  }
  return a;
}

string makes(int a,int l){
  string s;
  for(int i=l-1;i>=0;i--){
    s.push_back('0'+(int)a/pow(10,i));
    a%=(int)pow(10,i);
  }
  return s;
}

int main(){
  while(1){


  
  vector<string> k;
  set<string> f;
  int a;
  int l;
  cin>>a>>l;
  if(a==0 && l==0){break;}
  string x=makes(a,l);
  k.push_back(x);
  f.insert(x);
  int ans=-1;
  string sans;
  for(int i=0;i<=20;i++){
    string g=k[i];
    sort(g.begin(),g.end());
    int mi=make(g);
    reverse(g.begin(),g.end());
    int mx=make(g);
    mi=mx-mi;
    string d=makes(mi,l);
    if(f.find(d)!=f.end()){ans=i+1; sans=d; break;}
    f.insert(d);
    k.push_back(d);
  }
  int q=0;
  for(int i=0;i<k.size();i++){
    if(sans==k[i]){ans-=i; q=i; break;}
  }
  int w=make(sans);
  cout<<q<<" "<<w<<" "<<ans<<endl;
  



  }
  
  return 0;
}
  
  

