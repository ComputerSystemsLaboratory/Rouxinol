#include<iostream>
using namespace std;

int solve(int,int);

int A[20],n;

int main(){

  int q,M[200];

  cin >> n;
  for(int i=0 ; i < n ; i++)cin >> A[i];
  
  cin >> q; 
  for(int i=0 ; i < q ; i++)cin >> M[i];

  for(int i=0 ; i < q ; i++){
    if(solve(0,M[i])){
      cout <<"yes"<<endl;
    }else{
      cout <<"no"<<endl;
    }
  }
  
  return 0;

}

int solve(int i,int m){
  
  if( i >= n ){
    return m == 0;
  }
  if(solve(i+1,m)){
    return true;
  }
  if(solve(i+1,m-A[i])){
    return true;
  }
  
  return false;
  
}