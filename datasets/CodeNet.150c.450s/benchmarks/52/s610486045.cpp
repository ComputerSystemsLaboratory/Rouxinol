#include <iostream>
#include <list>
using namespace std;

int main(){
  list<int> rails;
  int car;

  while(cin >> car){
    if(car == 0){
      cout << *(--rails.end()) << endl;
      rails.pop_back();
    }
    else
      rails.push_back(car);
  }
  
  return 0;
}