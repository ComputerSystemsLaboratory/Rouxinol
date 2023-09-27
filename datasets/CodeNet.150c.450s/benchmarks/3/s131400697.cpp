#include <iostream>
using namespace std;

int main(){
  string str, task, what;
  int q, a, b;
  cin >> str >> q;
  while(q--){
    cin >> task;
    if(task.compare("replace") == 0){
      cin >> a >> b >> what;
      for(int i=a; i<=b; i++)
	str[i] = what[i-a];
    }
    else if(task.compare("reverse")==0){
      cin >> a >> b;
      string tmp(str);
      for(int i=a; i<=b; i++)
	str[i] = tmp[b-i+a];
    }
    else{
      cin >> a >> b;
      for(int i=a; i<=b; i++)
	cout << str[i];
      cout << endl;
    }
  }
  return 0;
}