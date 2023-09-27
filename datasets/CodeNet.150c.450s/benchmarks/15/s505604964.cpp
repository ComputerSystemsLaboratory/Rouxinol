#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> S, int key){
  for(int i = 0; i < S.size(); i++){
    if(S[i] == key) return i;
  }
  return -1;
}

int main(void){
  vector<int> S;
  int n, q, cnt = 0;

  cin >> n;
  for(int i = 0; i < n; i++){
    int num;
    cin >> num;
    S.push_back(num);
  }

  cin >> q;
  for(int i = 0; i < q; i++){
    int key;
    cin >> key;
    if(linearSearch(S, key) >= 0) cnt++;
  }
  cout << cnt << endl;
  return 0;
}