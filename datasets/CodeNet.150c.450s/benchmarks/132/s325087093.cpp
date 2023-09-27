#include <iostream>
using namespace std;

int main(){
  int n,p;
  int w, ss[50], i;

  while( true ){
    cin >> n >> p;
    if( !n && !p ) break;

    w = p;
    for( i=0;i<n;i++ ) ss[i]=0;

    i=0;
    while( true ){
      if( w>0 ){
	w--; ss[i]++;
	if( ss[i]==p ){
	  cout << i << endl;
	  break;
	}
      }else{
	w+=ss[i]; ss[i]=0;
      }
      i = (i+1)%n;
    }
  }
  return 0;
}