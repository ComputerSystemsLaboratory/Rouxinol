#include <iostream>
#include <map>
using namespace std;

void show(int m[20][20],int x,int y){
  for(int i=0;i<20;i++){
    for(int j=0;j<20;j++){
      if(i==x&&j==y){
        cout << "X";
        continue;
      }
      cout << m[i][j];
    }
    cout << endl;
  }
  cout << endl;
}
int main(){
  while(1){
    int N=0;
    cin >> N;
    if(N==0)break;
    int m[21][21]={0};
    for(int i=0;i<N;i++){
      int x,y;
      cin >> x >> y;
      m[x][y]=1;
    }
    int M;
    cin >> M;
    map<char,pair<int,int> > mp;
    mp['N'].first=0;
    mp['N'].second=1;
    mp['E'].first=1;
    mp['E'].second=0;
    mp['S'].first=0;
    mp['S'].second=-1;
    mp['W'].first=-1;
    mp['W'].second=0;
    int count=0;
    int nx=10,ny=10;
    if(m[nx][ny]==1){
      count++;
      m[nx][ny]=0;
    }
    for(int i=0;i<M;i++){
      char Q;
      int D;
      cin >> Q >> D;
      for(int j=0;j<D;j++){
        nx+=mp[Q].first;
        ny+=mp[Q].second;
        if(m[nx][ny]==1){
          count++;
          m[nx][ny]=0;
        }
      }
    }
    if(count==N){
      cout << "Yes" << endl;
    }else{
      cout << "No" << endl;
    }
  }
}

