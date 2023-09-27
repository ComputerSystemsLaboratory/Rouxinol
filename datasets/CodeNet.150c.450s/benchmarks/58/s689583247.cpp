#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <cstdlib>
using namespace std;


int main(){
  stack<int> s;
  string word;
  while(cin >> word){
    if(word=="+"){
      int x1 = s.top();
      s.pop();
      int x2 = s.top();
      s.pop();
      s.push(x1+x2);
    }else  if(word=="-")
    {
      int x1 = s.top();
      s.pop();
      int x2 = s.top();
      s.pop();
      s.push(x2-x1);
    }else if (word=="*")
    {
      int x1 = s.top();
      s.pop();
      int x2 = s.top();
      s.pop();
      s.push(x1 * x2);
    }else
    {
     s.push(atoi(word.c_str()));
    }
  }
   cout << s.top() <<endl;
}