#include<iostream>
using namespace std;
#include<vector>

int main(){
  while(1){
    int ans=1;
    int n;
    cin>>n;
    if(n==0)break;
    vector< vector<int> > xy (21, vector<int>(21,0) );
    int x=10;
    int y=10;
    for(int i=0;i<n;i++){
      int a,b;
      cin>>a>>b;
      xy[a][b]=1;
    }
    int k;
    cin>>k;
    for(int i=0;i<k;i++){
      string s;
      int m;
      cin>>s>>m;
      for(int j=0;j<m;j++){
        if(s=="N")y++;
        if(s=="E")x++;
        if(s=="S")y--;
        if(s=="W")x--;
        xy[x][y]=0;
      }
    }
    for(int i=0;i<21;i++){
      for(int j=0;j<21;j++){
        if(xy[i][j]!=0){
          ans=0;
        }
      }
    }
    if(ans==1){
      cout<<"Yes"<<endl;
    }else{
      cout<<"No"<<endl;
    }
  }
  return 0;
}