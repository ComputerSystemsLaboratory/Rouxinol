#include <iostream>

using namespace std;

int main(){
  int n,m,p;
  while(cin >> n >> m >> p,n||m){
    int i,x[n],sum=0;
    --m;
    for(i=0;i<n;i++){
      cin >> x[i];
      sum+=x[i]*100;
    }
    sum-=(sum*p/100);
    if(x[m]==0)cout << 0 << endl;
    else cout << sum/x[m] << endl;
  }
  return 0;
}

