#include <iostream>
#include <vector>

using namespace std;

vector<int> data;

void shuffle(int p,int c){
  vector<int> tmp(c);
  int pos = data.size() - p - c + 1;
  for(int i=0;i < c;i++){
    tmp[i] = data[pos+i];
  }
  data.erase(data.begin()+pos, data.begin()+pos+c);
  for(int i=0;i < c;i++){
    data.push_back(tmp[i]);
  }
}

int main(){
  int n, r, p, c;
  while(1){
    cin>> n >> r;
    if(!n && !r) break;
    data.reserve(n+1);
    for(int i=1;i<=n;i++){
      data.push_back(i);
    }
    for(int i=0;i<r;i++){
      cin>> p >> c;
      shuffle(p,c);
    }
    cout << data[data.size()-1] << endl;
    data.clear();
  }
  return 0;
}