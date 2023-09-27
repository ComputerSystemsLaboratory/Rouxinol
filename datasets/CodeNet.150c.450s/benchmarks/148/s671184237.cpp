#include<bits/stdc++.h>
#define PI 3.141592653589
using namespace std;
using ll = long long;

template<typename T_char>
T_char ToUpper(T_char cX){return toupper(cX);}

int main(){
  int n; cin >> n;
  vector<string> s(n);
  for(int i=0; i<n; ++i) cin >> s[i];

  int c = 0;
  int c1 = 0;
  int c2 = 0;
  int c3 = 0;
  for(int i=0; i<n; ++i){
    if(s[i]=="AC") c++;
    else if(s[i]=="WA") c1++;
    else if(s[i]=="TLE") c2++;
    else if(s[i]=="RE") c3++;
  }

  cout << "AC" << " " << 'x' << " " << c <<endl;
  cout << "WA" << " " << 'x' << " " << c1 <<endl;
  cout << "TLE" << " " << 'x' << " " << c2 <<endl;
  cout << "RE" << " " << 'x' << " " << c3 <<endl;
}