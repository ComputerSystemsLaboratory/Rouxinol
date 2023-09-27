#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
  int N, min=9999999, max=-9999999;
  long sum=0;
  cin >> N;
  for(int i=0;i<N;i++){
    int t;
    cin >> t;
    if(min > t){
      min = t;
    }
    if(max < t){
      max = t;
    }
    sum += t;
  }

  cout << min << " " << max << " " << sum << endl;
  return 0;
}