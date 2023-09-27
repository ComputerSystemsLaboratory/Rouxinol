#include <iostream>

using namespace std;

int main () {
  int n,max,min,i;
  long long sum;
  int date[10001] ={0};
  cin >> n;
  for( i=0 ; i<n ; i++){
    cin >> date[i];
  }
  max=date[0];
  min=date[0];
  sum=date[0];

  for( i=1 ; i<n ; i++ ){ 
    if( max<date[i] )
      max=date[i];
    if( min>date[i] )
      min=date[i];
    sum+=date[i];
  }cout << min <<" "<< max <<" "<< sum << endl;
  return 0;
}