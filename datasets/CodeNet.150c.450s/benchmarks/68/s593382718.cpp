#include <iostream>
#include <cmath>
using namespace std;

int main(){
  while(1){
    int n;
    cin >> n;

    if(n==0)
      break;

    int a[n];
    for(int i=0;i<n;i++){
      cin >> a[i];
    }

    int min=1000000;

    for(int i=0;i<n-1;i++){
      for(int j=i+1;j<n;j++){
        int dif = abs(a[i]-a[j]);
        if(dif<min)
          min = dif;
      }
    }

    cout << min << endl;
  }
}

