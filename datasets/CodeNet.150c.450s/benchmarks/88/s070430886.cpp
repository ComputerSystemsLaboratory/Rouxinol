#include <iostream>
#include <vector>

using namespace std;

int main(){
  int h, w;
  while(cin >> h >> w, h||w){
    int taikaku0 = 0;
    taikaku0 = h*h + w*w;
    int min = 400000;
    int mh = 151;
    int mw = 151;
    //bool bf = false;
    for(int i=1; i<=150; i++){ //yoko
      for(int j=1; j<i; j++){ //takasa
	int taikaku = i*i+j*j;
	if(taikaku0 == taikaku && h < j && mh > j){
	  mh = j;
	  mw = i;
	  min = taikaku;
	  //bf = true;
	  //break;
	}else if(taikaku0 < taikaku && min > taikaku){
	  mh = j;
	  mw = i;
	  min = taikaku;
	  //bf = true;
	  //break;
	}else if(taikaku0 < taikaku && min == taikaku && mh > j){
	  mh = j;
	  mw = i;
	  min = taikaku;
	  //bf = true;
	  //break;
	}
      }
      //if(bf){
      //break;
      //}
    }
    cout << mh << " " << mw << endl;
  }
  return 0;
}