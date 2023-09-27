#include<iostream>
using namespace std;

bool search(int);

int q,T[500];

int main(){

  int n,S[10000],counter=0;

  cin >>n;
  for(int i=0 ; i < n ; i++)cin >>S[i];

  cin >>q;
  for(int i=0 ; i < q ; i++)cin >>T[i];

  for(int i=0 ; i < n ; i++)counter+=search(S[i]);

  cout <<counter<<endl;

  return 0;
}

bool search(int s){

  for(int i=0 ; i < q ; i++){
    if( s == T[i] ){
      T[i]=-1;
      return 1;
    }
  }
  
  return 0;

}