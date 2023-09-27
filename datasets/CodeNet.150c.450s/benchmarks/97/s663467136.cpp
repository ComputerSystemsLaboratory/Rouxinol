#include <iostream>
#include <vector>
using namespace std;
int main(){
  int dx[4] = {-1,0,1,0};
  int dy[4] = {0,-1,0,1};
  while(true){
    int n;
    cin >> n;
    if(0 == n)return 0;
    vector<int> x(n);
    vector<int> y(n);
    x[0] = 0;
    y[0] = 0;
    for(int i = 1;i < n;i++){
      int ni,di;
      cin >> ni;
      cin >> di;//0左 1下 2右 3上
      x[i] = x[ni] + dx[di];
      y[i] = y[ni] + dy[di];
    }
    int minX = 0;int maxX = 0;
    int minY = 0;int maxY = 0;
    
    for(int i = 1;i < n;i++){
      if(maxX < x[i]){
	maxX = x[i];
      }else if( minX > x[i]){
	minX = x[i];
      }
      if(maxY < y[i]){
	maxY = y[i];
      }else if(minY > y[i]){
	minY = y[i];
      }
    }
    cout << maxX - minX+1 << " " << maxY - minY+1 << endl;
    
  }
  return 0;
}