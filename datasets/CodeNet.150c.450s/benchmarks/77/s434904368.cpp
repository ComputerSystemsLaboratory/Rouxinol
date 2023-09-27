#include <iostream>
#include <cstring>

using namespace std;


int map[50][50];
int N;
int x,y;


int main(){

  while(1){

    cin >> N;
    if(N == 0) break;

    memset(map,0,sizeof(map));

    for(int i = 0; i < N ; i++){
      cin >> x >> y;
      map[x][y] = 1;
    }

    int M;
    int l;
    char d;
    int tr = 0;

    cin >> M;
    int nx = 10, ny =10;
    for(int i = 0; i < M ; i++){
      cin >> d >> l;
      if(d == 'N'){
	for(int i = 0 ; i < l; i++){
	  ny++;
	  if(map[nx][ny] == 1){
	    tr++;
	    map[nx][ny] = 0;
	  }
	}
      }else if(d == 'E'){
	for(int i = 0 ; i < l; i++){
	  nx++;
	  if(map[nx][ny] == 1){
	    tr++;
	    map[nx][ny] = 0;
	  }
	}
	
      }else if(d == 'S'){
	for(int i = 0 ; i < l; i++){
	  ny--;
	  if(map[nx][ny] == 1){
	    tr++;
    map[nx][ny] = 0;
	  }
	}
       }else if(d == 'W'){
	for(int i = 0 ; i < l; i++){
	  nx--;
	  if(map[nx][ny] == 1){
	    tr++;
	    map[nx][ny] = 0;
	  }
	}
      }
    }
    if( tr == N ) cout << "Yes" << endl;
    else cout << "No" << endl;
  }

  return 0;
}