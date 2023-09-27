#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
#define pb push_back
#define all(v) (v).begin(), (v).end()

#define INF 200000 //n<=100,000より

int main(){
  int N;
  cin>>N;
  vi a(N);
  for(int i=0; i<N; i++)cin>>a[i];

  vi dp; //ありうるLISのi個の最小

  for(int x: a){
    auto itr = lower_bound(all(dp), x);
    if(itr!=dp.end()){
     *itr = x; 
    }else{
      dp.pb(x);
    }
  }

  int ans = dp.size();
  cout<<ans<<endl;
}
