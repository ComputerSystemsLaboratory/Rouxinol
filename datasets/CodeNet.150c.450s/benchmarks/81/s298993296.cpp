#include <iostream>
#include <vector>

using namespace std;

int main(void){
  int n;
  while(cin>>n,n){
    vector<vector<int> > road(15,vector<int>(15,1<<22));
    int maxn = 0;
    for(int i = 0 ; i < 15 ; i ++)road[i][i] = 0;
    
    for(int i = 0 ; i < n ; i ++){
      int a,b,c;
      cin>>a>>b>>c;
      road[a][b] = c;
      road[b][a] = c;
      if(maxn<max(a,b))maxn=max(a,b);
    }
    
    for(int k = 0 ; k <= maxn ; k ++)
    for(int i = 0 ; i <= maxn ; i ++)
    for(int j = 0 ; j <= maxn ; j ++)
      road[i][j] = min(road[i][j], road[i][k] + road[k][j]);
    
    int min = 1<<22;
    int num = 0;
    
    for(int i = 0 ; i <= maxn ; i ++){
      int sum = 0;
      for(int j = 0 ; j <= maxn ; j ++){
        sum += road[i][j];
      }
      if(min>sum){
        min = sum;
        num = i;
      }
      
    } 
    cout<< num << " " << min << endl;
  }
  
}