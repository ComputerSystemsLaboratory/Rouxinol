#include<bits/stdc++.h>
using namespace std;
const int INF = 1e9;


int main(){
  int n;
  cin>>n;
  string u;
  map<string,int> a;
  for(int i=0;i<n;i++){
    cin>>u;
    a[u]=1;
  }
  int m,count=0;
  cin>>m;
  for(int i=0;i<m;i++){
    cin>>u;
    if(a[u]==1){
      count++;
      if(count%2==1){
	cout<<"Opened by ";
      }else{
	cout<<"Closed by ";
      }
      cout<<u<<endl;
    }else{
      cout<<"Unknown "<<u<<endl;
    }
  }
  return 0;
}

