#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
 
int find_t[101],end_t[101];
vector<queue<int> > vec(101);
int flag[101];
int t=1;
 
void DFS(int);
void Print();
 
int main(int argc,char* argv[]){
  int n,id,cnt,x;
   
  memset(find_t,255,sizeof(find_t));
  memset(end_t,0,sizeof(end_t));
  memset(flag,0,sizeof(flag));
 
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>id>>cnt;
    flag[id]=0;
    queue<int> tmp;
    for(int l=0;l<cnt;l++){
      cin>>x;
      tmp.push(x);
    }
    vec[id]=tmp;
  }
   
  for(int i=1;i<=n;i++){
    if(flag[i]==0)
      DFS(i);
  }
  Print();
   
  return 0;
}
 
void DFS(int p){
  if(flag[p]==0){
    find_t[p]=t++;
    flag[p]=1;
  }
  else
    return;
     
  queue<int> tmp=vec[p];
  while(!tmp.empty()){
    DFS(tmp.front());
    tmp.pop();
  }
 
  end_t[p]=t++;
}
 
void Print(){
  for(int i=1;i<=100;i++){
    if(find_t[i]!=-1)
      printf("%d %d %d\n",i,find_t[i],end_t[i]);
  }
}