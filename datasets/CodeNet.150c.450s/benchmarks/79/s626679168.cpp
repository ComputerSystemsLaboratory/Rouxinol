#include <bits/stdc++.h>
using namespace std;

#define PI 4*atan(1)
#define INF 1e8

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(){
  int n, r;
  while(cin >> n >> r, n || r){
    vector<int> card(n);
    for(int i = 0; i < n; i++)card[i] = i + 1;
    int p, c;
    for(int i = 0; i < r; i++){
      cin >> p >> c;
      p--;
      for(int j = p; j < p + c; j++){
        int tmp;
        tmp = card[card.size() - p - c];
        card.erase(card.begin() + card.size() - p - c);
        card.push_back(tmp);
      }
    }
    cout << card[n - 1] << endl;
  }
}