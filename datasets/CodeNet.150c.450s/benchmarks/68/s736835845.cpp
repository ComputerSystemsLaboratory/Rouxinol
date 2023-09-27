#include <iostream>

using namespace std;

int myabs(int i){
  if(i > 0){return i;}
  else{return -i;}
}

int main(void){
  while(1){
    int n;
    cin >> n;
    if(n == 0) {return 0;}

    int a[n];

    for(int i = 0 ; i < n ; i++){
      cin >> a[i];
    }

    long int diff;
    long int ans = 500000000;

    for(int i = 0 ; i < n ; i++){
      for(int j = 0 ; j < n ; j++){
        diff = myabs(a[i] - a[j]);
        if(i != j && ans > diff){
          ans = diff;
        }
      }
    }

    cout << ans << endl;
  }
}