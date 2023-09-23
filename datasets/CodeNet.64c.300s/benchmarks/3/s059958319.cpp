#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  int arr[n];
  for(int i=0; i<n ; i++)
    cin >> arr[i];
  for(int j=n-1;j>=0;j--){
    if( j!=0)
      cout <<arr[j]<<' ';
    else
      cout <<arr[j];
  }
  cout << endl;
}