#include <iostream>
#include <stack>
using namespace std;

int main(void){
  stack<int> car;
  int num,res[10000],cnt=0,cnt1=0;

  while( cin >> num ){

    if( num != 0 ) car.push(num);
    else{
      res[cnt] = car.top();
      car.pop();
      cnt++;
      cnt1++;
    }
  }

  cnt = 0;

  while(cnt1){

    cout << res[cnt] << endl; 
    cnt++;
    cnt1--;

  }

  return 0;
}