#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;
  
  string S[N];
  for(int i = 0; i < N; i++){
    cin >> S[i];
  }
  
  int ac = 0,wa = 0,tle = 0,re = 0;
  for(int i = 0; i < N; i++){
    if(S[i] == "AC"){
      ac++;
    }else if(S[i] == "WA"){
      wa++;
    }else if(S[i] == "TLE"){
      tle++;
    }else{
      re++;
    }
  }
  
  cout << "AC x " << ac << endl;
  cout << "WA x " << wa << endl;
  cout << "TLE x " << tle << endl;
  cout << "RE x " << re << endl;
}