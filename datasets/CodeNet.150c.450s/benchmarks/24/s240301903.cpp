#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef pair<ll,ll> P;
ll N,M,sum,ans;
vector<P> V;

void init(){
  V.clear();
  sum = ans = 0;
}

int main(){

  while(cin >> N >> M && N+M){
    init();

    for(int i = 0; i < N; i++){
      P p;
      cin >> p.second >> p.first;
      V.push_back(p);
      sum += p.second;
    }

    sort(V.begin(),V.end());

    sum = max(0LL,sum-M);

    for(int i = 0; i < V.size(); i++){
      if(V[i].second > sum){
	ans += sum*V[i].first;
	break;
      }else{
	ans += V[i].first*V[i].second;
	sum -= V[i].second;
      }
    }

    cout << ans << endl;
  }
  return 0;
}