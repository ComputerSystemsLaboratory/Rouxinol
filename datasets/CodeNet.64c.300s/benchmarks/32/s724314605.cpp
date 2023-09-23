#include<iostream>
using namespace std;

int main(){
  int n;
  int a;
  int max;
  int min;
  long long sum;
  cin >> n;
  for(int i=0; i<n; i++){
    cin >> a;
    if(i == 0){
      max = a;
      min = a;
      sum = a;
    } else{
      if(max < a)max = a;
      if(min > a)min = a;
      sum += a;
    }
  }
  cout << min << " "<< max << " " << sum << endl;
  return 0;
}