#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
typedef pair<int,int> P;
int main(){
  int n,m;
  while(cin>>n>>m,n||m){
    vector<P> v;
    for(int i=0;i<n;++i){
      int d,p;
      cin >> d >> p;
      v.push_back(P(p,d));
    }
    sort(v.begin(), v.end(), greater<P>());
    int s = 0;
    for(int i=0;i<n;++i) s+=v[i].first*v[i].second;
    for(int i=0;i<n;++i){
      m-=v[i].second;
      s-=v[i].first*v[i].second;
      if(m<0){
	s+=v[i].first*(-m);
	m=0;
	break;
      }
    }
    cout << s << endl;
  }
  return 0;
}