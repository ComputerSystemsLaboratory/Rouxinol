#include <iostream>
using namespace std;
int main(void){
  int a[3],i,j,b;
  for (i=0;i<3;i++) cin >> a[i];
  for (i=0;i<3;i++){
    for (j=i+1;j<3;j++){
      if (a[i]>a[j]){
        b=a[i];
        a[i]=a[j];
        a[j]=b;
      }
    }
  }
  cout << a[0] << ' ' << a[1] << ' ' << a[2] << endl;
  return 0;
}
