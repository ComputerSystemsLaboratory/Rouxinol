#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin>>n;
  vector<string> a(n);
  for(int i=0;i<n;i++){
    cin>>a.at(i);
  }
  int ac=0;
  int w=0;
  int t=0;
  int r=0;
  
  for(int i=0;i<n;i++){
    if(a.at(i)=="AC"){
      ac++;
    }
    if(a.at(i)=="WA"){
      w++;
    }
    if(a.at(i)=="TLE"){
      t++;
    }
    if(a.at(i)=="RE"){
      r++;
    }
  }
  cout<<"AC x "<<ac<<endl<<"WA x "<<w<<endl<<"TLE x "<<t<<endl<<"RE x "<<r<<endl;
}