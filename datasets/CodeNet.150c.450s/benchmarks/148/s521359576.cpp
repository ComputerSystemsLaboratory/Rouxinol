#include<iostream>
using namespace std;

int main(){
  int n,a,w,t,r;
  a=0;w=0;t=0;r=0;
  cin >> n;
  string s[n];
  for(int i=0; i<n; i++){
    cin >> s[i];
  }

  for(int i=0; i<n; i++){
    if(s[i] == "AC")a++;
    else if(s[i] == "WA")w++;
    else if(s[i] == "TLE")t++;
    else if(s[i] == "RE")r++;
  }

  cout << "AC" << " " << "x" << " " <<  a << endl;
  cout << "WA" << " " << "x" << " " <<  w << endl;
  cout << "TLE" << " " << "x" << " " << t << endl;
  cout << "RE" << " " << "x" << " " << r << endl;

  return 0;
}