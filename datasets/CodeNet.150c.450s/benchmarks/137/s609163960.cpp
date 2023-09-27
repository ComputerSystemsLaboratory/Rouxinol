#include<bits/stdc++.h>
#define M 1046527
using namespace std;
int hs(string);
int matoi(char);
int h1(int k){return k%M;}
int h2(int k){return 1+(k%(M-1));}
int main(){
  vector<string> a(M,"");
  int n;
  cin >> n;
  for(int j=0;j<n;j++){
    string fu;
    string st;
    cin >> fu >> st;
    int ke=hs(st);
    if(fu=="insert"){
      for(int i=0;;i++){
	int h=(h1(ke)+i*h2(ke))%M;
	if(a[h]==st)break;
	else if(a[h]==""){
	  a[h]=st;
	  break;
	}
	
      }
    }
    else{
      int f=0;
      for(int i=0;;i++){
	int h=(h1(ke)+i*h2(ke))%M;
	if(a[h]==st){
	  cout << "yes" << endl;
	  f=1;
	  break;
	}
	else if(a[h]=="")break;
      }
      if(!f)cout << "no" << endl;
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