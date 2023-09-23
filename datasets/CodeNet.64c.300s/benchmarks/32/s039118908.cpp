#include<iostream>
using namespace std;

int main(){
  long long sum = 0;
  int input, max = -1000000, min = 1000000, count = 0, limit;

  cin >> limit;

  while ( count < limit ){
    cin >> input;
    min = min > input ? input : min;
    max = max < input ? input : max;
    sum = sum + input;
    count++;
  }

  cout << min << " " << max << " " << sum << "\n";

  return 0;

}