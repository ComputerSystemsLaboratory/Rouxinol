#include <iostream>
#include <vector>

using namespace std;

int main () {
  int n;
  int sum, max_sum;

  while(cin >> n, n){
    vector<int> a;
    for(int i = 0; i < n; i++){
      int temp;
      cin >> temp;
      a.push_back(temp);
    }

    max_sum = a[0];

    for(int begin = 0; begin < n; begin++){
      sum = 0;
      for(int end = begin; end < n; end++){
        sum += a[end];
        if (max_sum < sum){
          max_sum = sum; 
        }
      }
    }

    cout << max_sum << endl;
  }
}