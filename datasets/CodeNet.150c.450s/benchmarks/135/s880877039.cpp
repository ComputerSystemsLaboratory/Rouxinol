#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;

int hh[1000*1500+1];
int ww[1000*1500+1];

int main(){
  int n,m;
  while(cin>>n>>m,n+m){
    vector<int> h(n);
    vector<int> w(m);
    memset(hh,0,sizeof(hh));
    memset(ww,0,sizeof(ww));
    int _max = 0;
    for(int i=0;i<n;i++) cin>>h[i];
    for(int i=0;i<m;i++) cin>>w[i];
    for(int i=0;i<n;i++){
      int sum = 0;
      for(int j=i;j<n;j++){
	sum += h[j];
	hh[sum]++;
	_max = max(_max,sum);
      }
    }

    for(int i=0;i<m;i++){
      int sum = 0;
      for(int j=i;j<m;j++){
	sum += w[j];
	ww[sum]++;
	_max = max(_max,sum);
      }
    }
    
    int sum = 0;
    for(int i=0;i<=_max;i++){
      if(ww[i]!=0 && hh[i]!=0){
	sum += (hh[i]*ww[i]);
      }
    }
    cout<<sum<<endl;

  }
  return 0;
}