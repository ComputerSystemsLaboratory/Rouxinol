#include<iostream>
using namespace std;
int main(){
  int a[4],b[4];
  while(cin >>a[0]){
    int hans = 0, bans = 0;
    for(int i=1; i<4; i++) cin >>a[i];
    for(int i=0; i<4; i++) cin >>b[i];
    for(int i=0; i<4; i++){
      if(a[i] == b[i]){
	hans++;
	a[i] = 10;
	b[i] = 11;
      }
    }
    for(int i=0; i<4; i++){
      for(int j=0; j<4; j++){
	if(a[i] == b[j]){
	  bans++;
	  a[i] = 10;
	  b[j] = 11;
	}
      }
    }
    cout <<hans<<" "<<bans<<endl;
  }
  return 0;
}