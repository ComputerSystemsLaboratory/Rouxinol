#include <iostream>
using namespace std;

int main(){
  int n, x;
  int result;

  while(true){
    cin >> n >> x;
    result = 0;
    if(n==0 && x==0){
      return 0;
    }else{
      for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
          for(int k=j+1; k<n; k++){
            if((i+1)+(j+1)+(k+1) == x){
              //cout << i+1 << "+" << j+1 << "+" << k+1 << "=" << x << endl; 
              result ++;
            }
          }
        }
      }
    }
    cout << result << endl;
  }
}