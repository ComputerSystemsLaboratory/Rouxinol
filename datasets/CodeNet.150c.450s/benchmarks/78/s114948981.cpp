#include<iostream>
#include<vector>

using namespace std;
typedef pair<int,int> P;
const int MAX = 1000001;
const int INF = (1<<20);

vector<int> p;
P ans[MAX];

void init(){

  for(int i = 1; i < MAX; i++)
    ans[i].first = ans[i].second = INF;

}

void make(){
  int n = 0;
  while(1){
    int now = (n*(n+1)*(n+2))/6;
    if(now >= MAX) break;
    p.push_back(now);
    n++;
  }


  for(int i = 1; i < MAX; i++)
    for(int j = 1; j < p.size(); j++){
      if(i-p[j] >= 0){
	if(p[j]%2) ans[i].second = min(ans[i].second,ans[i-p[j]].second+1);
	ans[i].first = min(ans[i].first,ans[i-p[j]].first+1);
      }
    }
}

int main(){
  init();
  make();
  int in;
  while(cin >> in && in) cout << ans[in].first << " " << ans[in].second << endl;
  return 0;
}