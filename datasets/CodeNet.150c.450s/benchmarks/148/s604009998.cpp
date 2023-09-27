#include<iostream>
using namespace std;
int main(){
  int N;
  cin>> N;
  string S[N];
  int ac=0;
  int wa=0;
  int tle=0;
  int re=0;
  for(int i=0;i<N ;i++){
    cin >> S[i];
  }
  for(int i=0;i<N;i++){
  	if(S[i]=="AC"){
      ac +=1;
    }
    else if(S[i]=="WA"){
      wa +=1;
    }
    else if(S[i]=="TLE"){
      tle +=1;
    }
    else if(S[i]=="RE"){
      re +=1;
    }
  }
  cout<< "AC x "<< ac << endl;
  cout<< "WA x "<< wa << endl;
  cout<< "TLE x "<< tle << endl;
  cout<< "RE x "<< re << endl;
}