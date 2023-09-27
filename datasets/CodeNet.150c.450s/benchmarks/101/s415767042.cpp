#include <iostream>
#include <vector>

using namespace std;

vector<int> G[100001];
vector<int> color(100001, -1);
void init(int idx, int c){
  if(color[idx] >= 0) return;
  color[idx] = c;
  for(int to: G[idx])
	init(to, c);
}

int main(){
  int N, M; cin >> N >> M;

  for(int i=0;i<M;++i){
	int a, b; cin >> a >> b;
	G[a].push_back(b);
	G[b].push_back(a);
  }
  for(int i=0;i<N;++i){
	init(i, i);
  }

  int Q; cin >> Q;
  for(int q=0;q<Q;++q){
	int a, b; cin >> a >> b;
	cout << (color[a]==color[b]? "yes": "no") << endl;
  }

  return 0;
}