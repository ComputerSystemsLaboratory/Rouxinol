#include <iostream>
#include <stack>

int main(){

  std::stack<int> st;

  int N = 0;
  int a;

  while(N <= 100 && std::cin >> a){
    if(a != 0){
      st.push(a);
    }
    else{
      std::cout << st.top() << std::endl;
      st.pop();
	}
    ++N;
  }
}
