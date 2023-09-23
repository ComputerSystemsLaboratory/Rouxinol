#include<iostream>
using namespace std;

int main(void){
  int n, input;
  long sum, max;
  while(cin >> n, n != 0){
    cin >> input;
    max = sum = input;
    for(int i = 0; i < n - 1; i++){
      cin >> input;
      if( sum < 0 )
	sum = input;
      else
	sum += input;
      if( max < sum )
	max = sum;
    }
    cout << max << endl;
  }
  return 0;
}