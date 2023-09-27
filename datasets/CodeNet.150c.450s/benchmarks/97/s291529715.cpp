#include <iostream>
#include <map>
#define P pair<int,int>
using namespace std;
int main(){
  int N,n,d;
  map<int,P > m;
  while(cin>>N&&N){
    m[0] = P(0,0);
    P mx(0,0),mn(0,0);
    for( int i=1;i<N;i++ ){
      cin >> n >> d;
      P p=m[n];
      switch(d){
      case 0: p.first--;  break;
      case 1: p.second--; break;
      case 2: p.first++;  break;
      case 3: p.second++; break;
      }
      m[i] = p;
      mx.first  = max(mx.first,  p.first);
      mx.second = max(mx.second, p.second);
      mn.first  = min(mn.first,  p.first);
      mn.second = min(mn.second, p.second);
    }
    cout << (mx.first-mn.first+1) << " " << (mx.second-mn.second+1) << endl;
  }
  return 0;
}