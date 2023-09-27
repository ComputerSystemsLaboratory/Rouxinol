#include<iostream>
using namespace std;

int main(){
  int n;
  cin >> n;

  long t[n];
  for(int i=0;i<n;i++){
    cin >> t[i];
  }

  long min = 1000001;
  long max = -1000001;
  long sum = 0;
  for(int j=0;j<n;j++){
    if(t[j]<min) min = t[j];
    if(t[j]>max) max = t[j];
    sum += t[j];
  }

  cout << min << " " << max << " " << sum << endl;
  
  return 0;
}