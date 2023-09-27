#include <iostream>
#include <vector>
using namespace std;

int N;

int main(void){
  while(cin >> N && N != 0){
    vector<pair<int, int> > block(200, pair<int, int>(0, 0));
    int top = 0, bottom = 0, left = 0, right = 0;
    block[0] = pair<int, int>(0, 0);
    for(int i = 1; i < N; i++){
      int n, d;
      cin >> n >> d;
      pair<int, int> nb = block[n];
      if(d == 0){
        block[i] = pair<int, int>(nb.first - 1, nb.second);
        if(block[i].first < left) left = block[i].first;
      }else if(d == 1){
        block[i] = pair<int, int>(nb.first, nb.second - 1);
        if(block[i].second < bottom) bottom = block[i].second;
      }else if(d == 2){
        block[i] = pair<int, int>(nb.first + 1, nb.second);
        if(block[i].first > right) right = block[i].first;
      }else if(d == 3){
        block[i] = pair<int, int>(nb.first, nb.second + 1);
        if(block[i].second > top) top = block[i].second;
      }
    }
    cout << (right - left) + 1 << " " << (top - bottom) + 1 << endl;
  }
  return 0;
}