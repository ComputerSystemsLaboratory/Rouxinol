#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <stack>
using namespace std;

int N;
string input, keitai[10] = {"", ".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
stack<char> st;

int main(void){
  cin >> N;
  while(N--){
    cin >> input;
    for(int i = 0; i < input.size(); i++){
      if(input[i] == '0' && !st.empty()){
        int cnt = 0, b = st.top() - '0';
        while(!st.empty()){
          st.pop(); cnt++;
        }
        cout << keitai[b][(cnt - 1) % keitai[b].size()];
      }else if(input[i] != '0'){
        st.push(input[i]);
      }
    }
    cout << endl;
  }
  return 0;
}