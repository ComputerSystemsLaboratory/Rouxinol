#include <iostream>

using namespace std;

int main(){
  int n;
  bool success;

  cin >> n;
  while(n--){
    success = false;
    int b = 0, c = 0;
    int a[10];
    for(int i=0; i<10; i++){
      cin >> a[i];
    }

    for(int i=0; i<10; i++){ 
      if(b < a[i] && c < a[i]){
        if(b < c)
          c = a[i];
        else
          b = a[i];
      }
      else if(b < a[i]){
          b = a[i];
      }
      else if(c < a[i]){
          c = a[i];
      }
      else{
        success = false;
        break;
      }

      if(i == 9)
        success = true;
    }

    if(success)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
}