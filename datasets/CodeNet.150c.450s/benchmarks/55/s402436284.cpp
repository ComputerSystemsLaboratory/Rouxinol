#include <iostream>
#include <string>
using namespace std;

int main(){
  int sum, n;
  string num;

  while(true){
    sum = 0;
    getline(cin, num);
    for(int i = 0; i <= 1000; i++){
      if(num[i] == '\0') break;
      n = num[i] - '0';
      sum += n;
    }
    if(sum == 0) break;
    cout << sum << endl;
  }
}