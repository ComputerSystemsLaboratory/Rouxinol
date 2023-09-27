#include<iostream>
#include<string>
using namespace std;          
int main(){
  int a[4],b[4],i,n;

  while(cin >> a[0] >> a[1] >> a[2] >> a[3], !cin.eof()){
    cin >> b[0] >> b[1] >> b[2] >> b[3];
    int hit = 0, num =0,blow = 0;

    for(i=0; i<4; i++){
      if(a[i] == b[i]){
	hit++;
      }
    }
    for(i=0; i<4; i++){
      for(n=0; n<4; n++){
	if(a[i] == b[n]){
	  num++;
	}
      }
    }
    blow = num - hit;
    cout << hit << ' ' << blow << endl;
  }
  return 0;
}