#include <bits/stdc++.h>
using namespace std;

int main(){
  int h,w;
  int i,j;
  int root;
  int tmp;
  int tmp_1,tmp_2;
  while(1){
    cin >> h >> w;
    if(h == 0 && w == 0){
      break;
    }
    root=h*h+w*w;
    int max_h=100;
    int max_w=100;
    int max;
    for(i = 1 ; i < 151 ; i++){
      for(j = 1 + i ; j < 151 ; j++){
	tmp=i*i+j*j; 
	max = max_h*max_h+max_w*max_w;
	if((max>tmp||(tmp==max&&i<max_h))&&((tmp==root&&i>h)||tmp > root)){
	  max_h=i;
	  max_w=j;
	}
      }
    }
    cout << max_h << ' ' << max_w << endl;
  }
  return 0;
}