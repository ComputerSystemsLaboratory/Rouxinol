#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  int n,a;
  long int s;
  vector<long int> x(10000),m(10000);
  while(cin >>n,n){
    x[0] = m[0] = 0;
    for(int i=1; i<=n; i++){
      cin >>a;
      x[i] = x[i-1]+a;
      m[i] = min(m[i-1],x[i]);
    }
    s = x[1];
    for(int i=1; i<=n; i++) s = max(s,x[i]-m[i-1]);
    cout <<s<<endl;
  }
}