#include<iostream>

using namespace std;

int main(void){
  int h,w;
  int i,j;
  int a,b;
  int min[3];
  while(1){
    min[0] = 300*150;
    min[1] = 150;
    min[2] = 150;
    cin >> h >> w;
    if(h == 0)
      break;
    a = h*h+w*w;
    for(i = 1;i <= 150;i++){
      for(j = i+1;j <= 150;j++){
	b = i*i+j*j;
	if(b > a || (b==a&&i>h)){
	  if(min[0] > b || (min[0]==b&&min[1]>i)){
	    min[0] = b;
	    min[1] = i;
	    min[2] = j;
	  }
	}
      }
    }
    cout << min[1] << ' ' << min[2] << endl;
  }
  return 0;
}