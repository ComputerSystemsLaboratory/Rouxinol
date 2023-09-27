#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

int n;
//int Map[401][401];
int xx[4]={-1,0,1,0};
int yy[4]={0,-1,0,1};

typedef struct{
  int x;
  int y;
}data;

int main(){
  while(cin>>n , n){
    //  memset(Map,0,sizeof(Map));
    //    int x=200;
    //    int y=200;
    int xmax,xmin;
    int ymax,ymin;
    xmax=xmin=200;
    ymax=ymin=200;
    vector<data> vec(n);
    data d;
    d.x=d.y=200;
    vec[0]=d;
    //  Map[y][x]=1;
    for(int i=1;i<n;i++){
      int a,b;
      cin>>a>>b;
      d=vec[a];
      d.x+=xx[b];
      d.y+=yy[b];
      vec[i]=d;
      //Map[d.y][d.x]=1;
      if(xmax < d.x) xmax = d.x;
      if(xmin > d.x) xmin = d.x;
      if(ymax < d.y) ymax = d.y;
      if(ymin > d.y) ymin = d.y;
    }
    cout<<xmax - xmin + 1 << " " <<ymax - ymin + 1<<endl;

  }
  return 0;
}