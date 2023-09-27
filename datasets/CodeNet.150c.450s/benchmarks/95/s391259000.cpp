#include<bits/stdc++.h>
using namespace std;

int N;
string S[111];
int main(){
  while(cin >> N && N ){
    int l,r;
    l = r = 0;
    for(int i=0;i<N;i++){
      cin >> S[i];
    }
    int cnt = 0;
    for(int i=0;i<N;i++){
      if( l == r && l == 0 ){
	if( i < N -1 ){
	  if( (S[i] == "lu" && S[i+1] == "ru") || 
	      (S[i] == "ru" && S[i+1] == "lu") ){
	    cnt ++;
	  }	  
	}
      }
      if( l == r && l == 1 ){
	if( i < N - 1){
	  if( (S[i] == "ld" && S[i+1] == "rd") || 
	      (S[i] == "rd" && S[i+1] == "ld") ){
	    cnt ++;
	  }
	}
      }
      if( S[i] == "ld" ){
	l = 0;
      } else if( S[i] == "rd" ){
	r = 0;
      } else if( S[i] == "lu" ){
	l = 1;
      } else {
	r = 1;
      }
    }
    cout << cnt << endl;
  }
}