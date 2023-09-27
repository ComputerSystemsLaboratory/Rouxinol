#include <iostream>
#include <cmath>
using namespace std;
int main(){
  double w,h;
  while(cin >> h >> w,w+h){
    int dline = w*w+h*h,Maxline = 1000000;
    int answ,ansh;
    for(int i = 1 ;i <= 149; i++ ){
      for(int j = i+1 ; j <= 150 ; j++ ){
	if(dline < i*i + j*j && i*i + j*j < Maxline ){
	  Maxline = i*i + j*j;
	  ansh = i;
	  answ = j;
	}else if(h < i && dline == i*i + j*j ){
	  Maxline = i*i + j*j;
	  ansh = i;
	  answ = j;
	  goto N;
	}
      }
    }
  N:;
    cout << ansh << " " << answ << endl;
  }
  return 0;
}