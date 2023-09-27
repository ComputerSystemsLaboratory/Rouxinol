#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstdio>
#include <queue>
using namespace std;

typedef pair<int, int> lake;

int main(void){
  string str;
  stack<int> slashes;
  stack<lake> lakes;
  stack<int> out;
  int sum_area=0;
  getline(cin, str);

  for(int i=0;i<str.length();i++){
    if(str[i] == '\\'){
      slashes.push(i);
    }else if(str[i] == '/'){
      if(!slashes.empty()){
        int sum=0;
        sum_area += i - slashes.top();
        if(!lakes.empty()){
          while(!lakes.empty() && lakes.top().second > slashes.top()){
            sum += lakes.top().first;
            lakes.pop();
          }
        }
        lakes.push(lake(sum+i - slashes.top(), i));
        slashes.pop();
      }
    }
  }
  cout << sum_area << endl;
  cout << lakes.size();
  while(!lakes.empty()){
    out.push(lakes.top().first);
    lakes.pop();
  }
  while(!out.empty()){
    cout << " " << out.top();
    out.pop();
  }
  cout << endl;
  return 0;
}