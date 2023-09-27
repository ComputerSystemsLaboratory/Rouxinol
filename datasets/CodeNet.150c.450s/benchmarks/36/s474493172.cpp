#include <iostream>
using namespace std;

int main()
{
  int d;
  int n;
  long square[600], s;
  int max=0;
  int i;

  square[0]=0;
  while(cin>>d){
    n=600/d-1;
    if(max<n){
      for(i=max+1; i<=n; i++){
        square[i]=square[i-1]+i*i;
      }
      max=n;
    }
    s=square[n]*d*d*d;
    printf("%ld\n", s);
  }

  return 0;
}