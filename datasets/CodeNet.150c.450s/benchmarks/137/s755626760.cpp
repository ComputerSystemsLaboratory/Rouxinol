#include<bits/stdc++.h>
using namespace std;
int hs(string);
int matoi(char);
int main(){
  int nma=1;
  for(int i=0;i<12;i++){
    nma*=4;
  }
  vector<int> a(nma+5,0);
  int n;
  cin >> n;
  for(int i=0;i<n;i++){
    string fu;
    string st;
    cin >> fu >> st;
    int h=hs(st);
    if(fu=="insert"){
      a[h]=1;
    }
    else{
      if(a[h])cout << "yes" << endl;
      else cout << "no" << endl;
    }
  }
  return 0;
}
int hs(string st){
  int re=0;
  for(int i=st.size()-1;i>=0;i--){
    re*=4;
    int a=matoi(st[i]);
    re+=a;
  }
  return re;
}
int matoi(char ch){
  if(ch=='A')return 1;
  if(ch=='C')return 2;
  if(ch=='G')return 3;
  return 4;
}