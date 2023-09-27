#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> f;
void init(){
  f.clear();
}

int input(){
  int w,h;
  cin>>w>>h;
  if(w==0&&h==0)return false;
  string s;
  for(int i=0;i<h;i++){
    cin>>s;
    f.push_back(s);
  }
  return true;
}

int vx[] = {0,0,1,-1};
int vy[] = {1,-1,0,0};

int rec(int x,int y){
  if(x<0||f.size()<=x)return 0;
  if(y<0||f[x].size()<=y)return 0;
  if(f[x][y]!='.')return 0;
  f[x][y]='#';
  int res = 1;
  for(int i=0;i<4;i++){
    res += rec(x+vx[i],y+vy[i]);
  }
  return res;
}

int solve(){
  int x,y;
  for(int i=0;i<f.size();i++){
    for(int j=0;j<f[i].size();j++){
      if(f[i][j]=='@'){
        x = i;
        y = j;
        f[i][j] = '.';
      }
    }
  }
  return rec(x,y);
}

int main(){
  while(init(),input()){
    cout<<solve()<<endl;
  }
}