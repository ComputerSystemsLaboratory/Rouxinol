#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  int A=0, W=0, T=0, R=0;
  cin >> n;
  for(int i=0; i<n; i++){
    string s;
    cin >> s;
    if(s == "AC"){
    	A += 1;
    }
    else if(s == "WA"){
    	W += 1;
    }
    else if(s == "TLE"){
    	T += 1;
    }
    else if(s == "RE"){
    	R += 1;
    }
  }
  cout << "AC x " << A << endl;
  cout << "WA x " << W << endl;
  cout << "TLE x " <<T << endl;
  cout << "RE x " << R  << endl;
}
