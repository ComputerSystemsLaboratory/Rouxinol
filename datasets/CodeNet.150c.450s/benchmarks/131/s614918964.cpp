#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main(){
  int a, L;
  while(cin >> a >>  L && (a + L) > 0){
    map<int, int> memo;
    int c = 0;
    while(memo.find(a) == memo.end()){
      memo[a] = c++;
      vector<int> ds;
      while(a > 0){
        ds.push_back(a % 10);
        a /= 10;
      }

      while((int)ds.size() < L) ds.push_back(0);
      sort(ds.begin(), ds.end());
      int M = 0;
      int m = 0;
      for(int i = 0; i < L; i++){
        m = m * 10 + ds[i];
        M = M * 10 + ds[L - i - 1];
      }
      a = M - m;
    }
    cout << memo[a] << " "<< a << " " << c - memo[a] << endl;
  }
}