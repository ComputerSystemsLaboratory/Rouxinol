#include<iostream>
#include<cctype>
using namespace std;

int toInt(string s){
  int res = 0;
  for(int i=0;i<s.size();i++){
    int k;
    if(isalpha(s[i]))k = 1;
    else k = s[i++] - '0';
    int b = 1;
    if(s[i] == 'm')b = 1000;
    if(s[i] == 'c')b = 100;
    if(s[i] == 'x')b = 10;
    res += k*b;
  }
  return res;
}

string toMCXI(int a){
  string res;
  string u[] = {"m","c","x","i"};
  int b = 1000;

  for(int i=0;i<4;i++){
    int k = a/b;
    if(k==1)res += u[i];
    else if(k)res += (char)('0'+k) + u[i];
    a -= k*b;
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