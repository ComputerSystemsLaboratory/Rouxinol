#include<bits/stdc++.h>
using namespace std;
typedef long long int lld;
int main(){
  int n,m;
  while(cin >> n , n){
    int mas[22][22];
    memset(mas,0,sizeof(mas));
    for(int i=0;i<n;i++){
      int x,y;
      cin >> x >> y;
      mas[y][x] = 1;
    }
    cin >> m;
    int ny = 10,nx = 10;
    int cnt = 0;
    if(mas[ny][nx] == 1){
      cnt++;
      mas[ny][nx] = 0;
    }
    for(int i=0;i<m;i++){
      char c; int mv;
      cin >> c >> mv;
      if(c == 'N'){
	for(int j=0;j<mv;j++){
	  ny++;
	  if(mas[ny][nx] == 1){
	    cnt++;
	    mas[ny][nx] = 0;
	  }
	}
      }
      else if(c == 'S'){
	for(int j=0;j<mv;j++){
	  ny--;
	  if(mas[ny][nx] == 1){
	    cnt++;
	    mas[ny][nx] = 0;
	  }
	}
      }
      else if(c == 'E'){
	for(int j=0;j<mv;j++){
	  nx++;
	  if(mas[ny][nx] == 1){
	    cnt++;
	    mas[ny][nx] = 0;
	  }
	}
      }
      else {
	for(int j=0;j<mv;j++){
	  nx--;
	  if(mas[ny][nx] == 1){
	    cnt++;
	    mas[ny][nx] = 0;
	  }
	}
      }
    }
    if(cnt == n) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
}