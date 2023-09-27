#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <stack>
using namespace std;
int main(int argc, char *argv[])
{
  stack<int> st;
  string input;
  int stack_num = 1;
  int ans_num = 0;
  int right_num = 0;
  int left_num = 0;
  int temp = 0;
  getline(cin, input); 
  // cout << input << "\n";

  for (int i = 0; i < input.size(); i++) {
    stack_num = 1;
    // cout << input[i] << "\n";
    if ('0' <= input[i] && input[i] <='9' || ((input[i] == '-') && ('0' <= input[i] && input[i] <='9'))) {
      if (input[i] == '-') {
	stack_num = 1*-1;
      }else {
	stack_num = stack_num*(input[i] - '0');	
      }

      while (true) {
	i = i+1;
	if (!('0' <= input[i] && input[i] <='9')) {
	  break;
	}
	stack_num = stack_num*10+(input[i]-'0');
      }
      // cout <<"aa" <<stack_num << "\n";
      
      st.push(stack_num);
    }else if(input[i] == ' '){
      
    }else {
      right_num = st.top();
      st.pop();
      left_num = st.top();
      st.pop();
      switch (input[i]) {
      case '+': {
	temp = left_num+right_num;
	break;
      }
      case '-': {
	temp = left_num - right_num;
	break;
      }
      case '*': {
	temp = left_num * right_num;
	break;
      }
      case '/': {
	temp = left_num / right_num;
	break;
      }
default:
	break;
      }
      // cout << ans_num << "\n";
      ans_num = temp;
      st.push(ans_num);
    }


  }
  cout << ans_num << "\n";
  return 0;
}

