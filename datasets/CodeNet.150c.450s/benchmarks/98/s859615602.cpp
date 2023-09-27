#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void){
  int n,m;

  while(cin >> n >> m,n|m){
    vector<int>a(n),b(m);
    int suma=0,sumb=0;
    for(int i=0;i<n;i++)cin >> a[i],suma+=a[i];
    for(int i=0;i<m;i++)cin >> b[i],sumb+=b[i];

    int ansa=-1,ansb=-1,ans=10000000;

    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
	if((b[j]-a[i])*2==sumb-suma && abs(a[i]+b[j]) < ans){
	  ans = abs(a[i]+b[j]);
	  ansa=a[i],ansb=b[j];
	}
      }
    }
    if(ansa<0)cout << -1 << endl;
    else cout << ansa << " " << ansb << endl;
  }
  
  return 0;
}