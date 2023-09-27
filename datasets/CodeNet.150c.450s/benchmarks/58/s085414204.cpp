#include <stack>
#include <iostream>
#include <algorithm>
#include <sstream>
#define ll long long

using namespace std;

int main(){
  string s;
  stack<ll> st;
  while(cin >> s){
    if(s == "+"){
      ll a = st.top();
      st.pop();
      ll b = st.top();
      st.pop();
      st.push(a + b);
    }else if(s == "-"){
      ll a = st.top();
      st.pop();
      ll b = st.top();
      st.pop();
      st.push(b - a);
    }else if(s == "*"){
      ll a = st.top();
      st.pop();
      ll b = st.top();
      st.pop();
      st.push(a * b);
    }else{
      stringstream mystream;
      mystream << s;
      ll a;
      mystream >> a;
      st.push(a);
    }
     

  }
  cout << st.top() << endl;
}