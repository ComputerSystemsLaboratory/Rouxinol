#include<iostream>
using namespace std;

int a,b,n;
struct cross{
  bool isbuilding;
  int access;
};
cross map[100][100];

void read()
{
  cin>>n;
  for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
      map[i][j].isbuilding=false;
      map[i][j].access=0;
    }
  }

  for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
    x--;y--;
    map[x][y].isbuilding=true;
  }
  map[0][0].access=1;
  return;
}

void dp_a(int crossa,int crossb)
{
  if(crossa+1==a){return;}
  if(map[crossa+1][crossb].isbuilding){return;}
  map[crossa+1][crossb].access+=map[crossa][crossb].access;
  return;
}

void dp_b(int crossa,int crossb)
{
  if(crossb+1==b){return;}
  if(map[crossa][crossb+1].isbuilding){return;}
  map[crossa][crossb+1].access+=map[crossa][crossb].access;
  return;
}

void solve()
{
  for(int i=0;i<a+b-2;i++){
    int times;
    if(i<(a<b)?a:b){
      times=i+1;
    }
    else if(i<=(a>b)?a:b){
      times=(a<b)?a:b;
    }
    else{
      times=a+b-i-1;
      
    }
    
    for(int j=0;j<times;j++){
      dp_a(j,i-j);
      dp_b(j,i-j);
    }
  }
  return;
}

int main()
{
  while(1){
    cin>>a>>b;
    if(!a&&!b){break;}
    read();
    solve();
    cout<<map[a-1][b-1].access<<endl;
  }
  return 0;
}