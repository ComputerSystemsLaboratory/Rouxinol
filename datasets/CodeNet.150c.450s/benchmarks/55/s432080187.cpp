#include<iostream>
#include<cstring>
using namespace std;

int main(){
  char x[1000];
  int num,sum;

  for(;;){
    cin >> x;
    sum = 0;
    if (x[0] == '0') break;

    for (int i = 0; i<strlen(x); i++){
      num = 0;

      num = x[i] - '0';
      sum += num;
    }
    cout << sum << endl;
  }

  return 0;
}