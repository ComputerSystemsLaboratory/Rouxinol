#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>
#include <vector>

#include <sstream>

using namespace std;

namespace stoi{
  int stoi(std::string str){
    int num;
    std::stringstream ss;
    ss << str;
    ss >> num;
    return num;
  }
}

int main(){
  stack<int> por;
  string tmp;
  while(cin >> tmp){
    if(tmp == "+" || tmp=="-" || tmp=="*"){
      long long int o2 = por.top();
      por.pop();
      long long int o1 = por.top();
      por.pop();
      long long int o3;

      if(tmp=="+"){
	o3 = o1 + o2;
	por.push(o3);
      }
      if(tmp=="-"){
	o3 = o1 - o2;
	por.push(o3);
      }
      if(tmp=="*"){
	o3 = o1 * o2;
	por.push(o3);
      }
    }else{
      long long int num = stoi::stoi(tmp);
      por.push(num);
    }
  }
  long long int res = por.top();
  cout << res << endl;
  
      
  

}