#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
typedef long long ll;

int main(){

  string s;

  while(getline(cin, s)){
    if(s=="0"){
      break;
    }
    int t=0;
    for(int i=0; i<s.size(); i++){
      t = t+s[i]-'0';
    }
    cout<<t<<endl;
  }
}