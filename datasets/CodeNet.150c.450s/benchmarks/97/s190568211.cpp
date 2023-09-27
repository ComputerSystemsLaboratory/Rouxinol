#include<bits/stdc++.h>
#define REP(i,s,n) for(int i=0 ; i < n ; i++)
#define rep(i,n) REP(i,0,n)
using namespace std;

typedef struct{

  int x,y;
  
}xy;

int main(){
  
  int N;
  int num_block,direction;
  int x_max,y_max,x_min,y_min;
  xy data[200];

  data[0].x=1,data[0].y=1;

  while(1){
    
    cin >>N;
    if(N==0)break;
    
    x_max=1,y_max=1;
    x_min=0,y_min=0;

    rep(i,N-1){
      cin >>num_block>>direction;
      if(direction == 0){
	data[i+1].x=data[num_block].x-1;
	data[i+1].y=data[num_block].y;
      }else if(direction == 1){
	data[i+1].x=data[num_block].x;
	data[i+1].y=data[num_block].y-1;
      }else if(direction == 2){
	data[i+1].x=data[num_block].x+1;
	data[i+1].y=data[num_block].y;
      }else{
	data[i+1].x=data[num_block].x;
	data[i+1].y=data[num_block].y+1;
      }
      if(data[i+1].x > x_max){
	x_max=data[i+1].x;
      }else if(data[i+1].x-1 < x_min){
	x_min=data[i+1].x-1;
      }else if(data[i+1].y > y_max){
	y_max=data[i+1].y;
      }else if(data[i+1].y-1 < y_min){
	y_min=data[i+1].y-1;
      }
    }

    //cout <<x_max<<" "<<x_min<<endl;
    //cout <<y_max<<" "<<y_min<<endl;
    
    cout <<x_max-x_min<<" "<<y_max-y_min<<endl;
    
  }

  return 0;
}