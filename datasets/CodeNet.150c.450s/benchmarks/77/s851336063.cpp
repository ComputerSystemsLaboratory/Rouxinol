#include<iostream>
#define rep(i,n) for(int i=0; i<n; i++)
using namespace std;
int main(){
  int n;
  while(cin >> n,n){
    int x,y;
    int t[21][21]={};
    rep(i,n){
      cin >> x >> y;
      t[x][y]=1;
    }
    int m,g;
    x=10; y=10;
    cin >> m;
    char d;
    rep(i,m){
      cin >> d >> g;
      rep(j,g){
        if(d=='N') y++;
        if(d=='E') x++;
        if(d=='S') y--;
        if(d=='W') x--;
        if(t[x][y]==1) t[x][y]=0;
      }
    }
    /*
    rep(i,20){
      rep(j,20) cout << t[i][j] << " ";
      cout << endl;
    }*/
    bool flag = true;
    rep(i,21) rep(j,21) if(t[i][j]==1) flag = false;
    if(flag==true) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
  return 0;
}

