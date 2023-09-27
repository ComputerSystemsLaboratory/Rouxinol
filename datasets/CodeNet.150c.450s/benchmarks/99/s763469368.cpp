#include<iostream>
#include<cctype>
using namespace std;

int toInt(string s){
  int res = 0;
  for(int i=0;i<s.size();i++){
    int k = 1;
    if(isdigit(s[i]))k = s[i++] - '0';

    int b = 1;
    if(s[i] == 'm')b = 1000;
    else if(s[i] == 'c')b = 100;
    else if(s[i] == 'x')b = 10;
    res += k*b;
  }
  return res;
}

string toMCXI(int a){
  string res;
  char u[] = {'m','c','x','i'};
  int b = 1000;

  for(int i=0;i<4;i++){
    int k = a/b % 10;
    if(k>1)res += (char)('0'+k);
    if(k)res += u[i];
    b /= 10;
  }
  return res;
}

int main(){
  int n;
  string s1,s2;

  cin >> n;
  for(int i=0;i<n;i++){
    cin >> s1 >> s2;
    cout << toMCXI( toInt(s1) + toInt(s2) ) << endl;
  }
}