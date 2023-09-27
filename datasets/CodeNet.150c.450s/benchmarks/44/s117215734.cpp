#include<iostream>
using namespace std;

int main(){

  int a[8];

  while(cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4] >> a[5] >> a[6] >> a[7]){

    int hit=0,blow=0;

    for(int i=0;i<4;i++){
      if(a[i]==a[i+4]){
	hit++;
	a[i]=-1*i;
	a[i+4]=-1*(i+4);
      }
    }

    for(int i=0;i<4;i++){
      for(int j=4;j<8;j++){
	if(a[i]==a[j]){
	  blow++;
	  a[i]=-1*i;
	  a[j]=-1*j;
	}
      }
    }

    cout << hit << ' ' << blow << endl;
  }
}