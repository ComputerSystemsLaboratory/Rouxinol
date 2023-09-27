#include <bits/stdc++.h>
using namespace std;

int main(void){
  vector<int> f;
  while(1){
    f.clear();
    int n, r, p, c;
    cin >> n >> r;
    if(n == 0 && r == 0) return 0;
    for(int i=n; i > 0; i--){
      f.push_back(i);
    }


    vector<int> t;
    for(int i=0; i < r; i++){
      cin >> p >> c;
      t.clear();
      for(int j=p-1; j < p+c-1; j++){
        t.push_back(f.at(j));
      }
      for(int j=p-1; j > 0; j--){
        f.at(j+c-1) = f.at(j-1);
      }
      for(int j=0; j < c; j++){
        f.at(j) = t.at(j);
      }


    }
    cout << f.front() << endl;
  }
}