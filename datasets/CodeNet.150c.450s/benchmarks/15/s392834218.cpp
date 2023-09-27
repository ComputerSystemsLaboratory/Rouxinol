#include <iostream>
//#include <ios>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  ios::sync_with_stdio(false);
  int M, N;
  vector<int> u, v;

  //input
  cin >> M;
  for(int i = 0; i < M; ++i){
    int m;
    cin >> m;
    u.push_back(m);
  }

  cin >> N;
  for(int i = 0; i < N; ++i){
    int n;
    cin >> n;
    v.push_back(n);
  }

  //calc
  int res = 0;

  vector<int>& l = (M >= N ? u : v);
  vector<int>& s = (M >= N ? v : u);  

  for(auto x : s){
    if(find(l.begin(), l.end(), x) != l.end()){
      ++res;
    }
  }
  
  cout << res << endl;
}