#include <iostream>
#include <string>
using namespace std;

int main(){
  while(1){
    int n;
    int sum = 0;
    int flag = 0;
    int p = 0;
    string ud[100];

    cin >> n;
    if (n == 0)
      return 0;
    for(int i = 0; i < n; i++){
      cin >> ud[i];
      if(ud[i] == "ru" || ud[i] == "lu"){
        p++;
      }
      if(ud[i] == "rd" || ud[i] == "ld"){
        p--;
      }
      if(p % 2 == 0 && p != flag){
        flag = p;
        sum++;
      }
    }
    cout << sum << "\n";
  }
}

