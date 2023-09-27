#include <iostream>
#include <cstdlib>
using namespace std;

int main(void){
  int n,i,j,a[1000],s=0,min,l,c,d;
  while(1){
    min = 1000000;
    cin >> n;
    if (n == 0)
        break;
    for (i=0;i<n;i++){
        cin >> l;
        a[i] = l;
    }
    for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
        s = abs(a[i] - a[j]);
        if(min > s)
          min = s;
      }
    }
    cout << min << endl;
  }
}
