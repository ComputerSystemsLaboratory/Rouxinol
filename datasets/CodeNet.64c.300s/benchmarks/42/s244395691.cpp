#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> VI;
typedef vector<VI> VVI;
const double PI = 3.14159265358979323846;
const double EPS = 1e-12;
const int INF = numeric_limits<int>::max() / 2;
const int NEG_INF = numeric_limits<int>::min() / 2;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  int jewel[21][21];
  int robot[21][21];
  int n;
  while(cin >>n,n){
    for(int i=0;i<=20;i++){
      for(int j=0;j<=20;j++){
        jewel[i][j]=0;
        robot[i][j]=0;
      }
    }
    bool ans=true;
    int pos_x=10,pos_y=10;
    for(int i=0;i<n;i++){
      int x,y;
      cin >> x >> y;
      jewel[x][y]=1;
    }
    int m;
    cin >> m;
    for(int i=0;i<m;i++){
    char d;
    cin >> d;
    int l;
    cin >> l;
    if(d=='N'){
      for(int j=0;j<l;j++){
        robot[pos_x][pos_y]=1;
        pos_y++;
        robot[pos_x][pos_y]=1;
      }
    }
    else if(d=='E'){
      for(int j=0;j<l;j++){
        robot[pos_x][pos_y]=1;
        pos_x++;
        robot[pos_x][pos_y]=1;
      }
    }
    else if(d=='S'){
      for(int j=0;j<l;j++){
        robot[pos_x][pos_y]=1;
        pos_y--;
        robot[pos_x][pos_y]=1;
      }
    }
    else{
      for(int j=0;j<l;j++){
        robot[pos_x][pos_y]=1;
        pos_x--;
        robot[pos_x][pos_y]=1;
      }
    }
  }
  for(int i=0;i<=20;i++){
    for(int j=0;j<=20;j++){
      if(jewel[i][j]==1){
        if(robot[i][j]==0) ans=false;
      }
    }
  }
  if(ans) cout << "Yes" << endl;
  else cout << "No" << endl;
  }
}