#include<iostream>
#include<vector>
using namespace std;
int main(){
  int m,nmin,nmax;
  while(cin>>m>>nmin>>nmax,m+nmin+nmax!=0){
    vector<int> point(m);
    for(int i=0;i<m;i++)
      cin>>point[i];
    int max=-1,ans=0;
    for(int i=nmin-1;i<nmax;i++){
      if(max<=(point[i]-point[i+1])){
	max=point[i]-point[i+1];ans=i+1;
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}