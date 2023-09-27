//Step Aerobics
#include<bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)

int main(){
  while(true){
    int n;
    cin>>n;
    if(n==0)break;
    vector<string> v;
    rep(i,n){
      string s;
      cin>>s;
      v.push_back(s);
    }
    int cnt=0;
    rep(i,n-1){
      if((v[i]=="lu"&&v[i+1]=="ru")||(v[i]=="ru"&&v[i+1]=="lu")
         ||(v[i]=="ld"&&v[i+1]=="rd")||(v[i]=="rd"&&v[i+1]=="ld")){cnt++; i++;}
    }
    cout<<cnt<<endl;
  }
  return 0;
}