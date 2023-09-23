#include<iostream>
using namespace std;
int main(){
  int a[4],b[4], hit, blow;
  bool flag[4];
  while(cin >> a[0] >> a[1] >> a[2] >> a[3] >> b[0] >> b[1] >> b[2] >> b[3]){
    hit = 0; 
    blow = 0;
    for(int i=0; i<4; i++)
      flag[i] = false;

    for(int i=0; i<4; i++){
	if(a[i] == b[i]){
	  hit++;
	  flag[i] = true;
	}
	for(int j=0; j<4; j++){
	  if( a[i] == b[j] &&  flag[i] != true){
	    blow++;
	  }
	}
    }
    cout << hit << " " << blow << endl;
  }
}