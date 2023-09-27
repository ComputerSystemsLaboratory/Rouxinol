#include<iostream>
#include<stack>
#include<cstdlib>

using namespace std;
int main(){
  char x[100];
  int i=0,a,b,temp=0;
  stack<int>sta;

  while(cin >> x){
    if(sta.size() >= 2){
      temp=1;
      a = sta.top();
      sta.pop();
      b = sta.top();
      sta.pop();
      //cout << b << " " << a << endl;
    }
    
    if(x[0] == '+'){
      sta.push(a+b);
      temp=0;
    } else if(x[0] == '-'){
      sta.push(b-a);
      temp=0;
    } else if(x[0] == '*'){
	sta.push(a*b);
	temp=0;
    } else if(x[0] == '/'){
      sta.push(b/a);
      temp=0;
    }else {
      if(temp == 1){
	sta.push(b);
	sta.push(a);
	temp=0;
      }

      sta.push(atoi(x));

    }
    //cout << "! " << sta.size() << endl;
    // cout << sta.size() << endl;
  }

  cout << sta.top() << endl;
  return(0);
}