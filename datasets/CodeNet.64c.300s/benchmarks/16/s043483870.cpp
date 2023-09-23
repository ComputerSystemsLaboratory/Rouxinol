#include<iostream>
using namespace std;

int main(){

  long int max=0,min;
  int n;
  int r;
 
  cin >> n;

  cin >> r;
  min = r;

  cin >> r;
  max = r-min;
  if(min>r){ min = r; }

  for(int i=2; i<n; i++){
    cin >> r;
    if(max<r-min){
      max = r-min;
    }
    if(min>r){
      min = r;
    }
  }

  cout << max << endl;

  return 0;
}