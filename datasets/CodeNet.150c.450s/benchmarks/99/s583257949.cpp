#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> VI;
typedef vector<VI> VVI;
const double PI = 3.14159265358979323846;
const double EPS = 1e-12;
const int INF = numeric_limits<int>::max() / 2;
const int NEG_INF = numeric_limits<int>::min() / 2;

int rtoi(string s){
  int len=s.length();
  int res=0,num=1;
  for(int i=0;i<len;i++){
    if(48<=s[i] && s[i]<=57) num=s[i]-48;
    if(s[i]=='m') {
      res+= num*1000;
      num=1;
    }
    else if(s[i]=='c') {
      res+= num*100;
      num=1;
    }
    else if(s[i]=='x') {
      res+= num*10;
      num=1;
    }
    else if(s[i]=='i') {
      res+= num;
      num=1;
    }
  }
  return res;
}

string itor(int n){
  string res="";
  if(n>=1000){
    if(n>=2000) res += to_string(n/1000) + "m";
    else res += "m";
    n %= 1000;
  }
  if(n>=100){
    if(n>=200)res += to_string(n/100) + "c";
    else res+= "c";
    n %= 100;
  }
  if(n>=10){
    if(n>=20)res += to_string(n/10) + "x";
    else res+="x";
    n %= 10;
  }
  if(n>=1){
    if(n>=2)res += to_string(n) + "i";
    else res+="i";
  }
  return res;
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  for(int i=0;i<n;i++){
    string s1,s2;
    cin >> s1 >> s2;
    int num1=rtoi(s1),num2=rtoi(s2);
    int ans=num1+num2;
    cout <<itor(ans) << endl;
  }
}