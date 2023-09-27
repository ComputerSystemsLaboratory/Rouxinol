#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int a,b;
  cin >> a >> b;
  int g[b][a+1],v;
  for(int i=0;i<b;i++){
    cin >> v;
    for(int j=0;j<a+1;j++){
      if(i==0){
	g[i][j]=j/v;
      }
      else{
	if(j-v<0)g[i][j]=g[i-1][j];
	else g[i][j]=min(g[i-1][j],g[i][j-v]+1);
      }
    }
  }
  cout << g[b-1][a] << endl;
  return 0;
}