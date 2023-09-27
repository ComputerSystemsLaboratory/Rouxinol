#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
typedef pair<int, int> P;

vector<P> rect;

bool solve(){
  int h, w;
  cin >> h >> w;
  if(h == 0 && w == 0)return false;
  for(int i = 0;i < rect.size();i++){
    if(rect[i] == P(h, w)){
      cout << rect[i+1].first << " " << rect[i+1].second<< endl;
      return true;
    }
  }
}

bool diag(P a, P b){
  int x = a.first;
  int y = a.second;
  int z = b.first;
  int zz = b.second;
  if(x*x+y*y == z*z+zz*zz)return x < z;
  return x*x+y*y < z*z+zz*zz;
}

int main(){
  for(int i = 1;i <= 210;i++){
    for(int j = i + 1;j <= 210;j++){
      rect.push_back(P(i, j));
    }
  }
  sort(rect.begin(), rect.end(), diag);
  while(solve());
  return 0;
} 