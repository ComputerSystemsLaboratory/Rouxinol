#include <iostream>
#include <limits.h>
#include <queue>
#include <algorithm>
#include <map>


using namespace std;

typedef pair<int,int> P;


const int N=10000;
int ball[10];
int n=0;

int A[10],B[10];

bool solve(int i,int a,int b,bool IS_A){

  //cout<<"a,b:"<<a<<","<<b<<endl;
  
  if(i==10) return true;

  if(IS_A){
    A[a]=ball[i];
    if(a>0 && A[a-1]>A[a]){
      //cout<<"hoge"<<endl;
      return false;
    }
    a++;
  }
  else{
    B[b]=ball[i];
    if(b>0 && B[b-1]>B[b]){
      //cout<<"huge"<<endl;
      return false;
    }
    b++;
  }
  
  bool t1,t2;
  
  //when ball[i] is pushed into A or B
  return (solve(i+1,a,b,true)||solve(i+1,a,b,false));
}





int main(){

  cin>>n;
  
  for(int i=0;i<n;i++){
    for(int j=0;j<10;j++){
      cin>>ball[j];
    }
    if(solve(0,0,0,true)||solve(0,0,0,false)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }


  return 0;
}