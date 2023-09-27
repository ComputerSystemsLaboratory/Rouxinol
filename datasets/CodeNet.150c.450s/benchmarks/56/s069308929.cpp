#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]){
  long long min = 1000000, max = -1000000, sum=0,nline,i;
  cin >> nline;
  const int n = nline;
  int arr[n];
  //  int *arr = new int(nline);
  for(i = 0;i < n;i++){
    cin >> arr[i];
  }
   for(i = 0;i < n;i++){
    if(arr[i] < min)min = arr[i];
    if(arr[i] > max)max = arr[i];
  }
  for(i = 0;i < n; i++){
    sum += arr[i];
  }
  cout << min << " " << max << " " << sum << endl;
  //  delete[] arr;
  return 0;
}