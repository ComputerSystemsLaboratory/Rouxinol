#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
  vector<int> heights(10);
  for (int i = 0; i < 10; i++) {
    cin >> heights[i];
  }

  sort(heights.begin(), heights.end(), greater<int>());
  
  for (int i = 0; i < 3; i++) {
    cout << heights[i] << endl;
  }

  return 0;
}