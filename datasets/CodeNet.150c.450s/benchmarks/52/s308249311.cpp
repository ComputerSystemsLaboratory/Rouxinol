#include <iostream>
#include <stack>
using namespace std;

int main(){
  stack<int> st;
  int n;
  while(cin >> n){
	if(!n){
	  cout << st.top() << endl;
	  st.pop();
	}
	else st.push(n);
  }
  return 0;
}