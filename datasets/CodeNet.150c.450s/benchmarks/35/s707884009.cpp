//Maximum Sum Sequence
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll INF = 1000000LL;

int main(){
  int n;
  while(true){
    ll max = -INF, tmp = -INF, d;
    cin >> n;
    if(n == 0)break;
    for(int i = 0; i < n; i++){
      cin >> d;
      tmp=(tmp+d > d ? tmp+d : d);
      if(max<tmp)max=tmp;
    }
    cout<<max<<endl;
  }
  return 0;
}