#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int x,y;
int data[222][222];

void solve(int h, int w){

  if(data[h][w]) return;
  data[h][w] = h*h+w*w;

  if(h > 200 || w > 200) return;

  solve(h+1, w);
  solve(h, w+1);

}
int main(){

  solve(0, 0);
  
  int h, w;
  while(scanf("%d %d", &h, &w), h){

    x = 222, y = 222;
    for(int i=151;i>0;i--){
      for(int j=151;j>0;j--){
	if(i == h && j == w || i >= j || h*h+w*w > data[i][j] || h*h+w*w == data[i][j] && i <= h) continue;
	if(y*y+x*x == data[i][j] && y > i) x = j, y = i;
	if(y*y+x*x > data[i][j]) x = j, y = i;
      }
    }

    cout << y << " " << x << endl;
  }
}