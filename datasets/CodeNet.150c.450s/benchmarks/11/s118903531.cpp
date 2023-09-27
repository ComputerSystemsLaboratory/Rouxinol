#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
  int N;
  char ch[4] = {'S', 'H', 'C', 'D'};
  cin >> N;
  vector<pair<char,int> >v(N);
  for(int i=0;i<N;i++){
    cin >> v[i].first;
    cin >> v[i].second;
  }

  for(int i=0;i<4;i++){
    for(int j=1;j<=13;j++){
      for(int k=0;k<N;k++){
        if(ch[i] == v[k].first && j == v[k].second){
          break;
        }
        if(k == N-1){
          cout << ch[i] << " " << j << endl;
        }
      }
    }
  }
  return 0;
}