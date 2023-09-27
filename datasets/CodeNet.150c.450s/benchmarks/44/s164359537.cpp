#include<iostream>
using namespace std;
int main(){
  int a[4],b[4];
  while(cin >>a[0]){
    for(int i=1; i<4; i++) cin >>a[i];
    for(int i=0; i<4; i++) cin >>b[i];
    int x = 0,y = 0;
    for(int i=0; i<4; i++){
      if(a[i] == b[i]){
	x++;
	a[i] = b[i] = -1;
      }
    }
    for(int i=0; i<4; i++){
      if(b[i] == -1) continue;
      for(int j=0; j<4; j++){
	if(b[i] == a[j]){
	  a[j] = -1;
	  y++;
	  break;
	}
      }
    }
    cout <<x<<" "<<y<<endl;
  }
  return 0;
}