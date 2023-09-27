#include<bits/stdc++.h>
using namespace std;

struct Point{
  int w,h;
};

int main(){
  int n,pla,idx;
  int minw,maxw,minh,maxh;
  Point p[200];
  p[0].w = p[0].h = 1;
  while(cin>>n,n){
    minw=1;maxw=1;minh=1;maxh=1;
  for(int i = 1; i < n; ++i){
    cin >> pla >> idx;
    switch (idx){
    case 0:
      p[i].w = p[pla].w - 1;
      p[i].h = p[pla].h;
      break;
    case 1:
      p[i].h = p[pla].h + 1;
      p[i].w = p[pla].w;
      break;
    case 2:
      p[i].w = p[pla].w + 1;
      p[i].h = p[pla].h;
      break;
    case 3:
      p[i].h = p[pla].h - 1;
      p[i].w = p[pla].w;
    }
  }
  for(int i = 0; i < n; ++i){
    if(p[i].w > maxw)maxw = p[i].w;
    if(p[i].w < minw)minw = p[i].w;
    if(p[i].h > maxh)maxh = p[i].h;
    if(p[i].h < minh)minh = p[i].h;
  }
  cout << maxw - minw + 1 << " " << maxh - minh +1 << endl;
  }
}