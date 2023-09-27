#include<iostream>
using namespace std;

int main() {
  int N,i,AC,WA,TLE,RE;
  string S;
  cin>>N;
  AC=WA=TLE=RE=0;
  for(i=0;i<N;i++) {
    cin>>S;
    if (S=="AC")AC++;
    else if(S=="WA")WA++;
    else if(S=="TLE")TLE++;
    else RE++;
  }
  cout<<"AC x "<<AC<<endl;
  cout<<"WA x "<<WA<<endl;
  cout<<"TLE x "<<TLE<<endl;
  cout<<"RE x "<<RE<<endl;
  return 0;
}
