#include<iostream>
using namespace std;

int map[16][16];
bool can[16][16];

int main(){
  int a,b,n;
  int x,y;

  while(1){
    cin >> a >> b;
    if(!a && !b)break;

    for(int i=0;i<a;i++){
      for(int j=0;j<b;j++){
	can[i][j] = true;
	map[i][j] = 0;
      }
    }

    cin >> n;
    for(int i=0;i<n;i++){
      cin >> x >> y;
      can[x-1][y-1] = false;
    }

    map[0][0] = 1;
    for(int i=0;i<a;i++){
      for(int j=0;j<b;j++){
	if(i>0 && can[i][j]){
	  map[i][j] += map[i-1][j];
	}
	if(j>0 && can[i][j]){
	  map[i][j] += map[i][j-1];
	}
      }
    }

    cout << map[a-1][b-1] << endl;
  }
}