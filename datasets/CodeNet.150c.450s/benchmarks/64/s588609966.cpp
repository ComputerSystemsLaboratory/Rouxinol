#include<iostream>
using namespace std;
int n,m;
int a[2000],b[2000];

int bfs(int i,int s){
  if(s==0)return 1;
  if(i>=n) return 0;
  if(bfs(i+1,s)||bfs(i+1,s-a[i]))return 1;
  return 0;
}

int  main(){

  cin>>n;
  for(int i=0;i<n;i++)cin>>a[i];
  cin>>m;
  for(int i=0;i<m;i++)cin>>b[i];

  for(int i=0;i<m;i++){
    if(bfs(0,b[i]))cout<<"yes"<<endl;
    else cout<<"no"<<endl;
  }
  return 0;

}