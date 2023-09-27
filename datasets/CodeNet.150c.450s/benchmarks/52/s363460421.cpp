#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <vector>
#include <stack>

using namespace std;


int main(){
  stack<int> train;
  int tmp;
  while(cin >> tmp){
    if(tmp!=0){
      train.push(tmp);
    }else{
      cout << train.top() << endl;
      train.pop();
    }
  }
    
  

  
  return 0;
}