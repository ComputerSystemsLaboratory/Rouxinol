#include<iostream>
#include<utility>
#include<vector>
#include<string>
using namespace std;

int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
int map[21][21];
int x;
int y;
int sum;

void move(int dir,int dd){
  for(int i=1;i<=dd;i++){
    x += dx[dir];
    y += dy[dir];
    if (map[x][y]==1){
      map[x][y]=0;
      sum+=1;
    }
  }
}


int maindo(void){
  sum=0;
  x=10;
  y=10;
  for(int s=0;s<21;s++){
    for(int t=0;t<21;t++){
      map[s][t]=0;
    }
  }
  int n,m;
  cin >> n;
  if (n==0) return 0;
  for(int i=0;i<n;i++){
    int s,t;
    cin >> s >> t;
    map[s][t]=1;
  }
  cin >> m;
  for(int i=0;i<m;i++){
    string dir;
    int dirint;
    int dd;
    cin >> dir >> dd;
    if (dir=="E") dirint=0;
    else if(dir=="N") dirint=1;
    else if(dir=="W") dirint=2;
    else if(dir=="S") dirint=3;
    move(dirint,dd);
  }
  if (sum==n) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 1;
}

int main(){
  while(1){
    int k=maindo();
    if (k==0) return 0;
  }
}