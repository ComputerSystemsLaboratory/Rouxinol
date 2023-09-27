#include<bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  map<string,int> A;
  for(int i=0;i<N;i++){
    string S;
    cin >> S;
    if(A.count(S)){
      A[S]++;
    }
    else{
      A[S]=1;
    }
  }
  cout << "AC x " << A["AC"] << endl;
  cout << "WA x " << A["WA"] << endl;
  cout << "TLE x " << A["TLE"] << endl;
  cout << "RE x " << A["RE"] << endl;
}