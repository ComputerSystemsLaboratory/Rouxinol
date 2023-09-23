#include<iostream>
#include<cstring>
using namespace std;
int cnted[22][22];
int h,w;
bool mas[22][22];
int solve();
int main(){
  while(1){
    memset(cnted,0,sizeof(cnted));
    memset(mas,true,sizeof(mas));
    int n;
    cin >> w >> h;
    if(w == 0 && h == 0) break;
    cin >> n;
    for(int i=0,a,b;i<n;i++){
      cin >> a >> b;
      mas[b-1][a-1]=false;
    }
    cout << solve() << endl;
  }
}
int solve(){
  cnted[0][0] = 1;
  for(int i=1;i<w;i++)
    if(mas[0][i]==true) cnted[0][i]=cnted[0][i-1];
  for(int i=1;i<h;i++)
    if(mas[i][0]==true) cnted[i][0]=cnted[i-1][0];
  for(int i=1;i<h;i++)
    for(int j=1;j<w;j++)
      if(mas[i][j]==true) cnted[i][j] = cnted[i-1][j]+cnted[i][j-1];

  return cnted[h-1][w-1];
}