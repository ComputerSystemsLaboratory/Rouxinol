#include <iostream>
using namespace std;

int h[1500],w[1500];
int hl[1500001],wl[1500001];

int main(){
  int n,m;
  while(cin>>n>>m &&(n||m)){
    long long co=0;
    for(int i=0;i<n;i++) cin>>h[i];
    for(int i=0;i<m;i++) cin>>w[i];
    for(int i=0;i<=1500000;i++) hl[i]=wl[i]=0;

    for(int i=0;i<n;i++){
      int sum=0;
      for(int j=i;j<n;j++){
	sum+=h[j];
	hl[sum]++;
      }
    }
    for(int i=0;i<m;i++){
      int sum=0;
      for(int j=i;j<m;j++){
	sum+=w[j];
	wl[sum]++;
      }
    }	
    for(int i=0;i<=1500000;i++) co+=hl[i]*wl[i];
    cout <<co<<endl;
  }

  return 0;
}