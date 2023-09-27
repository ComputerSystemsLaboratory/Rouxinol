#include <iostream>
#include <cstring>

#define INF 999999

using namespace std;

int list[100][100];
int ans;
int weigh,high;

void search(int x,int y);

int main(void){
  int n;
  int nx[100],ny[100];

  int i;

  while(cin>>weigh>>high,weigh||high){

    ans=0;
    for(i=0;i<100;i++){
      memset(list[i],0,sizeof(list[i]));
    }

    list[weigh][high]=100;
    cin>>n;
    for(i=0;i<n;i++){
      cin>>nx[i]>>ny[i];
      list[nx[i]][ny[i]]=INF;
    }
    search(1,1);
    cout<<ans<<endl;
  }
  return(0);
}

void search(int x,int y){
  if(list[x][y]==100){
    ans++;
    return;
  }

  if(x<weigh){
    if(list[x+1][y]!=INF){
      search(x+1,y);
    }
  }
  if(y<high){
    if(list[x][y+1]!=INF){
      search(x,y+1);
    }
  }
  return;
}