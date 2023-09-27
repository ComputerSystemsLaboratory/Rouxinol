#include<bits/stdc++.h>
using namespace std;
int N;
int M[256];
int toint(string s){
  int res = 0;
  for(int i=0;i<(int)s.size();i++){
    if( s[i] >='2' && s[i] <= '9' ){
      res += M[(int)s[i+1]] * (s[i]-'0');
      i++;
    } else {
      res += M[(int)s[i]];
    }
  }
  return res;
}
string ctos(char c){
  string s = " ";
  s[0] = c;
  return s;
}
string tostr(int n){
  string s = "";
  char dr[]="ixcm";
  int id = 0;
  while( n > 0 ){
    if( n % 10 > 0) s+=dr[id];
    if( n % 10 > 1) s+=ctos(n%10 + '0');
    id ++;
    n/=10;
  }
  reverse(s.begin(),s.end());
  return s;
}
int main(){
  M['m'] = 1000;
  M['c'] = 100;
  M['x'] = 10;
  M['i'] = 1;
  cin >> N;
  for(int t=1;t<=N;t++){
    string s1,s2;
    cin >> s1 >> s2;
    cout << tostr(toint(s1) + toint(s2)) << endl;
  }
}