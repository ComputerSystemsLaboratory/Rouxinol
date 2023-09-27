#include <iostream>
using namespace std;
int n,g[150][150],c[100],f[100],e[100],cnt=1;
void dfs(int now){
  c[now]=1;
  f[now]=cnt;
  cnt++;
	for(int i=0;i<n;i++){
		if(g[now][i] && c[i]!=1){
      		dfs(i);
      		cnt++;
		}
    }
  e[now]=cnt;
}
int main(){
 
  int a,k,num;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a>>k;
    for(int j=0;j<k;j++){
      cin>>num;
      g[a-1][num-1]=1;
    }
  }
	for(int i=0;i<n;i++){
	   if(c[i]!=1){
     	 dfs(i);
      	 cnt++;
       }
	}
 
	for(int i=0;i<n;i++){
		cout<<i+1<<" "<<f[i]<<" "<<e[i]<<endl;
	}
  return 0;
 
}
