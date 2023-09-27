#include <stack>
#include<queue>
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
  string word;
  stack<int> s;
  while(cin>>word){
    if(word == "+"){
      int x = s.top();
      s.pop();
      int y = s.top();
      s.pop();
      int z = x+y;
      s.push(z);
    }
    else if(word == "-"){
      int x = s.top();
      s.pop();
      int y = s.top();
      s.pop();
      int z = y-x;
      s.push(z);
    }
    else if(word == "*"){
      int x = s.top();
      s.pop();
      int y = s.top();
      s.pop();
      int z = x*y;
      s.push(z);
    }
    else{
      int x = atoi(word.c_str());
      s.push(x);
    }
  }
    int x = s.top();
    cout<<x<<endl;
}