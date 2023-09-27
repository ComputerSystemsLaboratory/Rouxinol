#include<iostream>
using namespace std;
int nm[1501],mm[1501];
int nc[1500001]={};
int c=0;
int k=0,l=0;
void lsnn(int);
void lsnm(int);
int main(){
  int n,m;
  int np,mp;
  while(1){
    //syoki
    for(int i=0;i<1501;i++){
      nm[i]=mm[i]=0;
    }
    for(int i=0;i<1500001;i++){
      for(int j=0;j<2;j++){
	nc[i]=0;
      }
    }
    c=0;
    k=0;
    l=0;
    //
    cin >> n >> m;
    if(n==0&&m==0)break;
    for(int i=0;i<n;i++){
      cin >> nm[i];
    }
    for(int i=0;i<m;i++){
      cin >> mm[i];
    }
    //n
    for(int i=0;i<n;i++){
      lsnn(nm[i]);
      np=nm[i];
      if(i!=n-1){
	for(int j=i+1;j<n;j++){
	  np+=nm[j];
	  lsnn(np);
	}
      }
    }
    //m
    for(int i=0;i<m;i++){
      mp=mm[i];
      if(nc[mp]!=0)c+=nc[mp];
      if(i!=m-1){
	for(int j=i+1;j<m;j++){
	  mp+=mm[j];
	  if(nc[mp]!=0)c+=nc[mp];
	}
      }
    }
    //out
    cout << c << endl;
  }
  return 0;
}
///////////////////////////////////////////
void lsnn(int n){
  nc[n]++;
}