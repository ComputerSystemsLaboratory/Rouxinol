#include <bits/stdc++.h>
#include <cstdlib> 
using namespace std;

int main() {
  int n;
  int a,w,t,r;
  cin >> n;
  string str[n];
  a = 0;
  w = 0;
  t = 0;
  r = 0;

  for(int i = 0; i < n; i++){
      cin >> str[i];
  }


  for(int i = 0; i < n; i++){
    if(str[i] == "AC"){
        a++;
    }else if(str[i] == "WA"){
        w++;
    }else if(str[i] == "TLE"){
        t++;
    }else if(str[i] == "RE"){
        r++;
    }
  }

  cout << "AC " << "x " << a << endl;
  cout << "WA " << "x " << w << endl;
  cout << "TLE " <<  "x " << t << endl;
  cout << "RE " << "x " << r << endl;
}