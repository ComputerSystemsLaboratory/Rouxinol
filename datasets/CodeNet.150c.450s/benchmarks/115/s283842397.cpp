#include<bits/stdc++.h>
using namespace std;

int lcs(string a,string b){
  int c[1001][1001];
  for(int i=0;i<1001;i++){
      for(int j=0;j<1001;j++){
          c[i][j]=0;    
      } 
  }
  int m=a.size(),n=b.size();
  int mx=0;
  a=' '+a;
  b=' '+b;
  for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
      if(a[i]==b[j]){
	c[i][j]=c[i-1][j-1]+1;
      }else{
	c[i][j]=max(c[i-1][j],c[i][j-1]);
      }
      mx=max(mx,c[i][j]);
    }
  }
  return mx;
}


int main(){
  int q;
  string s1,s2;
  cin>>q;
  for(int i=0;i<q;i++){
    cin>>s1>>s2;
    cout<<lcs(s1,s2)<<endl;
  }
  return 0;
}

