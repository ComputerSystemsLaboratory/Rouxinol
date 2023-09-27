#include<bits/stdc++.h>
using namespace std;

int N,L;
int buf[10];
int data[30];
int main(){
  while( cin >> N >> L && (N||L) ){
    int ic=0;
    while(1){
      data[ic] = N;
      for(int i=0;i<ic;i++){
	if( data[i] == N ){
	  cout << i << " " << data[i] << " " << ic - i << endl;
	  goto ende;
	}
      }
      for(int i=0;i<L;i++){
	buf[i] = N%10;
	N/=10;
      }
      sort(buf,buf+L);
      int maxi = 0, mini = 0;
      for(int i=0;i<L;i++){
	maxi *= 10;
	mini *= 10;
	maxi += buf[L-i-1];
	mini += buf[i];
      }
      N = maxi - mini;
      ic++;
    }
  ende:;
  }  
}