#include <bits/stdc++.h>
using namespace std;

string devine[4]={"AC","WA","TLE","RE"};

int main(){
  int n;
  cin >>n;
  int num[4]={0};
  for(int i=0;i<n;i++){
    string s;
    cin >>s ;
    if(s==devine[0]) num[0]++;
    if(s==devine[1]) num[1]++;
    if(s==devine[2]) num[2]++;
    if(s==devine[3]) num[3]++;
  }
  cout <<"AC x "<<num[0]<<endl;
  cout <<"WA x "<<num[1] <<endl;
  cout <<"TLE x "<<num[2] <<endl;
  cout <<"RE x " <<num[3] <<endl;
}