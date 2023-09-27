#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int str[5], i;

  cin >> str[0] >> str[1] >> str[2] >> str[3] >> str[4];

  sort(str, str + 5);

  for(i = 4;i >= 0;i--){
    cout << str[i] << flush;
    if(i != 0){
      cout << " " << flush;
    }
  }
  cout << endl;

  return 0;
}