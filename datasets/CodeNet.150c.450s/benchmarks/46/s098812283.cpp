#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
  int n, x;
  vector<int> v;
  while(cin >> n >> x && (n || x)){
    int count = 0;
    for(int i=1;i<=n;i++){
      for(int j=i+1;j<=n;j++){
        for(int k=j+1;k<=n;k++){
          int sum = i + j + k;
          if(sum == x)
            count++;
        }
      }
    }
    v.push_back(count);
  }

  for(int i=0;i<v.size();i++){
    cout << v[i] << endl;
  }

  return 0;
}