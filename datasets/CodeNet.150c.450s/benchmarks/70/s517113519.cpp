#include <bits/stdc++.h>

using namespace std;

int zeller(int M,int D,int Y = 2004){
  if(M < 3){
    Y--;
    M += 12;
  }
  return (Y+Y/4-Y/100+Y/400+(13*M+8)/5+D)%7;
}

int main(){
  int M,D;
  string A[7] = {"Sunday",
                 "Monday",
                 "Tuesday",
                 "Wednesday",
                 "Thursday",
                 "Friday",
                 "Saturday"};

  while(cin >> M >> D,M){
    cout << A[zeller(M,D)] << endl;
  }
}