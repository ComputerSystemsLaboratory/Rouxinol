#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  int n,m;
  int lot[30];
  cin >>n>>m;
  for(int i=0; i<n; i++)
    lot[i] = i+1;
  while(m--){
    int x,y,z;
    scanf("%d,%d",&x,&y);
    z = lot[x-1];
    lot[x-1] = lot[y-1];
    lot[y-1] = z;
  }
  for(int i=0; i<n; i++)
    cout <<lot[i]<<endl;
  return 0;
}