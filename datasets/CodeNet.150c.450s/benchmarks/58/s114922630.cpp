#include<bits/stdc++.h>
using namespace std;
int main(){
  stack<string>st;
  string s;
  while(cin>>s){
     if(s == "+" || s == "-" || s == "*"){
            int b = stoi(st.top()); st.pop();
            int a = stoi(st.top()); st.pop();
            int number;
            if(s == "+") number = a + b;
            if(s == "-") number = a - b;
            if(s == "*") number = a * b;
            st.push(to_string(number));
        }else{
            st.push(s);
        }
    }
    cout << st.top() << endl;
}
