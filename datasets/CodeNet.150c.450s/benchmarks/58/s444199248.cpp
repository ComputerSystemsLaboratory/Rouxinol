#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
const ll MOD = 1e9+7;
 
int main(){
  stack<int> S;
  int a, b;
  string s;

  while(cin >> s){
    if(s[0] == '+'){
      a=S.top(), S.pop();
      b=S.top(), S.pop();
      S.push(a+b);
    }else if(s[0] == '-'){
      b=S.top(), S.pop();
      a=S.top(), S.pop();
      S.push(a-b);
    }else if(s[0] == '*'){
      a=S.top(), S.pop();
      b=S.top(), S.pop();
      S.push(a*b);
    }else{
      S.push(atoi(s.c_str()));
    }
  }

  cout << S.top() << endl;
  return 0;
}
