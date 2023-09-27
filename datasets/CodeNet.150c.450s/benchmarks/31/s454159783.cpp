#include<iostream>
#include<algorithm>

using namespace std;
static const int MAX = 200000;

int main(){
  int n,array[MAX];

  cin >> n;
  for(int i = 0; i < n ; i++) cin >> array[i];

  int minValue = array[0];
  int maxValue = array[1] - array[0];

  for(int i = 1; i < n ;i ++){
    maxValue = max(array[i] - minValue, maxValue);
    minValue = min(minValue,array[i]);
  }

  cout << maxValue << endl;

  return 0;
}

