#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  ll N,i; 
  ll C[4] = {0};
  string S;
  cin >> N;
  for(i=0;i<=N-1;i++){
    cin >> S;
    if(S == "AC") C[0]++;
    if(S == "WA") C[1]++;
    if(S == "TLE") C[2]++;
    if(S == "RE") C[3]++;
    }
    cout << "AC x " << C[0] << endl;
    cout << "WA x " << C[1] << endl;
    cout << "TLE x " << C[2] << endl;
    cout << "RE x " << C[3] << endl;
}

