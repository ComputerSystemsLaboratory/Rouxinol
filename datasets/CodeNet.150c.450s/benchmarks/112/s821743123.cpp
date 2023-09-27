#include<bits/stdc++.h>
using namespace std;

int main(){
  map<char,char>maps;
  int n,m;
  char a,b;
  while(1){
  for(int i=0;i<26;i++){
    maps['A'+i]='A'+i;
    maps['a'+i]='a'+i;
  }
  for(int i=0;i<10;i++){
    maps['0'+i]='0'+i;
  }
  cin>>n;
  if(!n)break;
  while(n--){
    cin>>a>>b;
    maps[a]=b;
  }
  cin>>m;
  char str[m];
  for(int i=0;i<m;i++){
    cin>>a;
    str[i]=maps[a];
  }
  for(int i=0;i<m;i++){
    cout<<str[i];
  }
  cout<<endl;
  }
}