#include <iostream>
using namespace std;

int main()
{
  int a[10000],i,n,max,min;
  long long sum;
  i=0; 
  cin >> n;
  max=-1000000;
  min=1000000;
  sum=0;
  
  while(i!=n){
    
    cin >> a[i];
    if(max<a[i]){
      max=a[i];
    }
    if(min>a[i]){
      min=a[i];
    }
    sum=sum+a[i];  /*sum no gokei*/
    
    i++;
  }
  
  cout << min << " " << max << " " << sum << endl;
  
  return 0;
}