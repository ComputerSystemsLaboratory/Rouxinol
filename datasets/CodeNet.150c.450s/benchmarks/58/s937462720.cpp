#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
  int x,y,z;
  string str;
  stack<int> a;
  while(cin >> str){
    if(str == "+"){
      x = a.top();
      a.pop();
      y = a.top();
      a.pop();
      z = x + y;
      a.push(z);
    }
    else if(str == "-"){
      x = a.top();
      a.pop();
      y = a.top();
      a.pop();
      z = y - x;
      a.push(z);
    }
    else if(str =="*"){
      x = a.top();
      a.pop();
      y = a.top();
      a.pop();
      z = x * y;
      a.push(z);
    }
    else{
      a.push(stoi(str));
    }
  }
  cout << a.top() << endl;
}