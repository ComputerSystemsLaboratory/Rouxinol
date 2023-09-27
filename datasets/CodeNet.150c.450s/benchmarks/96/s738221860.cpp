#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<string> num = {"", ".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

  int n;
  cin >> n;
  string ans;
  for(int i = 0; i < n; i++){
    string s;
    cin >> s;
    
    ans = "";
    int j = 0;
    stack<int> st;
    for(int j = 0; j < s.length(); j++){
      if(s[j] == '0'){
        if(st.empty())continue;
        ans += num[st.top()][(st.size() - 1) % num[st.top()].size()];

        while(!st.empty())st.pop();
      }else{
        st.push(s[j] - '0');
      }
    }
    cout << ans << endl;
  }
}