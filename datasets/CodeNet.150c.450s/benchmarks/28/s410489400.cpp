#include <stdio.h>
#include <iostream>
using namespace std;

int n, k, w[100010];

bool ok(int P){
  int x = 0, y = 1;
  for(int j=0; j<n; j++){
    if(w[j] > P){
      return 0;
    }
    else{
      if(x+w[j] <= P){
	x += w[j];
      }
      else{
	y++;
	x = w[j];
      }
    }
  }
  if(y<=k) return 1;
  else return 0;
}

int main(){
  cin >> n >> k;
  for(int i=0; i<n; i++){
    cin >> w[i];
  }

  int l = 0, h =1000100000;
  while(l+1 < h){
    int m = (l+h)/2;
    if(ok(m)){
      h = m;
    }
    else{
      l = m;
    }

  }
  printf("%d\n", h);

}