#include<bits/stdc++.h>
using namespace std;
#define OUT(x) cout<<x<<endl
struct box{
  int x,y;
};
int ix[] = {-1,0,1,0};
int iy[] = {0,1,0,-1};
int main(){
  int n,b,h,maxx,maxy,minx,miny,ansx,ansy;
  while(cin >> n&&n){
    maxx=maxy=minx=miny=0;
    box bbox[201];
    bbox[0].x = bbox[0].y = 0;
    for(int i=1;i<n;i++){
      cin >> b >> h;
      bbox[i].x = bbox[b].x + ix[h];
      bbox[i].y = bbox[b].y + iy[h];
      if(bbox[i].x > maxx)maxx = bbox[i].x;
      else if(bbox[i].x < minx)minx = bbox[i].x;
      if(bbox[i].y > maxy)maxy = bbox[i].y;
      else if(bbox[i].y < miny)miny = bbox[i].y;
    }
    ansx = maxx - minx + 1;
    ansy = maxy - miny + 1;
    cout << ansx << " " << ansy << endl;
  }
}