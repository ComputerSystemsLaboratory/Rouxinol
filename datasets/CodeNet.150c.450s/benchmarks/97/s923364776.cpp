#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstring>

#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define DUMP(list) cout << "{ "; for(auto nth : list){ cout << nth << " "; } cout << "}" << endl;

using namespace std;

typedef struct{
  int x;
  int y;
}point;


void in_next(vector<point> &list,vector<vector<int> > &map,int m,int d,int i){

  int dx=0,dy=0;

  if(d==0){
    dx=-1;
  }
  else if(d==1){
    dy=1;
  }
  else if(d==2){
    dx=1; 
  }
  else if(d==3){
    dy=-1; 
  }


  list[i].x=list[m].x + dx;
  list[i].y=list[m].y + dy;

  map[list[i].y][list[i].x]=1;
}


int main()
{

  while(true){

    int w=420,h=420;
    int n;
    cin >> n;

    if(n==0){
      break;
    }

    int x=210,y=210;
    vector<point> list(n);
    vector<vector<int> > map(h,vector<int>(w,0));    



    for(int i=0;i<n;i++){
      if(i==0){
        point tmp;
        tmp.x=x;
        tmp.y=y;
        list[i].x=x;
        list[i].y=y;
        map[list[i].y][list[i].x]=1;
      }else{
        int m,d;
        point p;
        cin >> m >> d; 
        in_next(list,map,m,d,i); 
      }
    }
    
    int max_up=1000,max_down=0,max_left=1000,max_right=0;
    

    for(int i=0;i<h;i++){
      for(int k=0;k<w;k++){
        if(map[i][k]==1){
          if(max_up>i) max_up = i;
          if(max_down<i) max_down = i;
          if(max_left>k) max_left = k;
          if(max_right<k) max_right = k;
        }
      }
    }

    cout << max_right-max_left+1 << " " << max_down-max_up+1 << endl;  

  }

  return 0;
}