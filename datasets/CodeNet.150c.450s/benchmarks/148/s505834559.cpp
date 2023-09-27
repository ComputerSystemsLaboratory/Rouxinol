#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); i++)
using namespace std;
using ll=long long;

int main(){
  long long N;
  cin >> N;
  vector<string> s(N);
  
  rep(i,N) cin >> s.at(i);
  
  int AC=0,WA=0,TLE=0,RE=0;
  rep(i,N){
    if(s.at(i)=="AC") AC++;
    if(s.at(i)=="WA") WA++;
    if(s.at(i)=="TLE") TLE++;
    if(s.at(i)=="RE") RE++;
  }
  
    cout << "AC x " << AC << endl;
    cout << "WA x "<< WA << endl;
    cout << "TLE x " << TLE << endl;
    cout << "RE x "<< RE << endl;
}
