#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#define REP(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
  int num;
  cin >> num;
  bool card[4][13];
  REP(i,4){
    REP(j,13){
      card[i][j]=false;
    }
  }
  char code;
  int pat,number;
  REP(i,num){
    cin >>code>>number;
    if(code=='S'){
      pat=0;
       card[pat][number-1]=true;
    }
    if(code=='H'){
      pat=1;
       card[pat][number-1]=true;
    }
    if(code=='C'){
      pat=2;
       card[pat][number-1]=true;
    }
    if(code=='D'){
      pat=3;
      card[pat][number-1]=true;
    }
  }
   REP(i,4){
    REP(j,13){
      if(card[i][j]==false){
        if(i==0)
          cout <<"S " <<j+1;
        else if(i==1)
          cout <<"H "<<j+1;
        else if(i==2)
          cout <<"C "<<j+1;
        else if(i==3)
          cout <<"D "<<j+1;
        cout <<endl;
      }
    }
  }
}