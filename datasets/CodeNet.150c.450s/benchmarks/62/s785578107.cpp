#include <iostream>

using namespace std;

int main(void){
  int i,j,temp,a[3];
  
  for(i=0;i<3;i++)  cin >> a[i];
  for(i=0;i<2;i++){
    for(j=0;j<2-i;j++){
      if(a[j]>a[j+1]){
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }

  cout << a[0] << ' ' << a[1] << ' ' << a[2] << endl;
}