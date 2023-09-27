#include <iostream>
using namespace std;
int n,a[100][100],b[100],c[100],d[100],cnt=1;
void DepthFirstSearch(int now){
  b[now]=1;
  c[now]=cnt;
  cnt++;
    for(int i=0;i<n;i++){
        if(a[now][i] && b[i]!=1){
            DepthFirstSearch(i);
            cnt++;
        }
    }
  d[now]=cnt;
}
int main(){
  
  int u,m,num;
  cin>>n;
  for(int i = 0;i < n;i++){
    cin>>u>>m;
    for(int j = 0;j < m;j++){
      cin >> num;
      a[u-1][num-1]=1;
    }
  }
    for(int i=0;i<n;i++){
       if(b[i]!=1){
         DepthFirstSearch(i);
         cnt++;
       }
    }
  
    for(int i=0;i<n;i++){
        cout<< i+1 << " " << c[i] << " " << d[i]<<endl;
    }
  return 0;
  
}
