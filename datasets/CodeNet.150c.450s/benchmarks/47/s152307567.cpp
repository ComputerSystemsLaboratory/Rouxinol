#include <iostream>
using namespace std;

int main(){
  int x, y, r, w, h;
  int i;
  int edge[4];
  int flag = 0;

  cin>>w>>h>>x>>y>>r;
  edge[0] = x-r;
  edge[1] = w-(x+r);
  edge[2] = y-r;
  edge[3] = h-(y+r);

  for(i = 0; i < 4; i++){
    if(edge[i] < 0){
      flag = 1;
      break;
    }
  }

  if(flag == 0){
    cout<<"Yes"<<endl;
  }else{
    cout<<"No"<<endl;
  }

}