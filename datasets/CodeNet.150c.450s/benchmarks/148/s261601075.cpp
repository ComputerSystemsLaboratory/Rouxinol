#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,a1=0,a2=0,a3=0,a4=0;
  cin >> n;
  string s;
  for(int i = 0 ; i < n;i++){
    cin >> s;
    if(s=="AC"){
      a1++;
    } else if(s=="WA"){
      a2++;
    } else if(s=="TLE"){
      a3++;
    } else {
      a4++;
    }
  }
  cout << "AC x " << a1 << endl;
  cout << "WA x " << a2 << endl;
  cout << "TLE x " << a3 << endl;
  cout << "RE x " << a4 << endl;
}