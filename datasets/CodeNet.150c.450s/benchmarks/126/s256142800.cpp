#include<iostream>
using namespace std;
int road[100][100];
int mem[100][100];
int a,b;
int n;
int solve(int x,int y);
int main(){
  int x,y;
  while(cin>> a>> b){
    if(a==0 && b==0){
      break;
    }
    road[a-1][b-1]=2;
    cin>> n;
    for(int i=0;i<100;i++){
      for(int j=0;j<100;j++){
	road[i][j]=0;
	mem[i][j]=0;
      }
    }
    
    for(int i=0;i<n;i++){
      cin>> x>> y;
      road[x-1][y-1]=1;
    }
    
    int ans;
    ans=solve(0,0);
    
    cout<< ans<< endl;
  }
  return 0;
}

int solve(int x,int y){
  if(road[x][y]==1) return 0;
  if(x>=a || y>=b) return 0;
  if(mem[x][y]>0) return mem[x][y];
  if(x==a-1 && y==b-1) return 1;
  return mem[x][y]=solve(x+1,y) + solve(x,y+1);
}