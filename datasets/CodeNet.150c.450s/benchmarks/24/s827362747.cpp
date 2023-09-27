#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef pair<int, int> PII;

int main(){
  int N, M;
  while(cin >> N >> M){
    if(N == 0 && M == 0) break;
    vector<PII> route;
    PII tmp;
    for(int i = 0 ; i < N ; i++){
      cin >> tmp.second >> tmp.first;
      route.push_back(tmp);
    }
    sort(route.begin(), route.end());
    reverse(route.begin(), route.end());
    for(int i = 0 ; i < N ; i++){
      if(M == 0) break;
      if(M >= route[i].second){
	M -= route[i].second;
	route[i].first = 0;
      }
      else if(M < route[i].second){
	route[i].second -= M;
	M = 0;
      }
    }
    int ans = 0;
    for(int i = 0 ; i < N ; i++){
      ans += route[i].first * route[i].second;
    }
    cout << ans << endl;
  }
  return 0;
}