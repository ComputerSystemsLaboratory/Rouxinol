#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
int c[52];
int check(int j,int k){
  for(int l=0;l<j;l++){
  if(k==c[l])
    return 1;
  }
  return 0;
}
int main(){
  int n,b,m=0,s=0;
  char a;
  cin>>n;
  vector<pair<char,int> > vpci(52);
  vector<pair<char,int> > vpci2(52);
  for(int i=0;i<4;i++){
    for(int j=1;j<=13;j++){
      switch(i){
      case 0: vpci[s]=make_pair('S',j);s++; break;
      case 1: vpci[s]=make_pair('H',j);s++; break;
      case 2: vpci[s]=make_pair('C',j);s++; break;
      case 3: vpci[s]=make_pair('D',j);s++; break;
      }
    }
  }
    for(int k=0;k<n;k++){
      cin >> a >> b;
      vpci2[k] = make_pair(a,b);
    }
    for(int l=0;l<n;l++){
      for(int t=0;t<52;t++){
	if(vpci2[l].first == vpci[t].first && vpci2[l].second == vpci[t].second){
	  c[m]=t;
	  m++;
	}
      }
    }
    for(int aa=0;aa<52;aa++){
      if(check(m,aa)==0)
	cout<<vpci[aa].first<<" "<<vpci[aa].second<<endl;    
    }
  return 0;
}