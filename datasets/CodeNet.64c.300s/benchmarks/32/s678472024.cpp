#include <iostream>
using namespace std;


int main(){
  int n;
  cin >>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin >>a[i];
  }
  int minimum=a[0];
  for(int i=0;i<n;i++){
    if(minimum>a[i])
      minimum=a[i];
  }
  int max=a[0];
  for(int i=0;i<n;i++){
    if(max<a[i])
      max=a[i];
  }
  long long int sum=0;
  for(int i=0;i<n;i++){
    sum+=a[i];
  }
  cout << minimum << " " << max << " " << sum << endl;
}