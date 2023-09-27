#include <iostream>

using namespace std;

int main(){
  int money;
  while(cin >> money && money !=0){
    int count =0;
    int res = 1000 - money;
    for(int i=0;i<3;i++){
      //      cout << res << endl;
      count +=res %10;
      if(res % 10 >4){ count -= 4;}
      res /=10;
    }
    cout << count << endl;
  }
}