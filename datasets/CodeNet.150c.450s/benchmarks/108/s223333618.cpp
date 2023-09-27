#include<iostream>
#define INF 1000000
using namespace std;

int que[100000];
int head,tail,leng=100000;
 
int isEmpty(){
  return head==tail;
}
 
void enqueue(int x){
  que[tail]=x;
  if(tail+1==leng) tail=0;
  else tail++;
}
 
int dequeue(){
  int x;
  x=que[head];
  if(head+1==leng) head=0;
  else head++;
  return x;
}
 

int a[101][101];
int d[101];
int n;

void bfs(int s){
int t;
  for(int i=1;i<=n;i++)d[i]=INF;
  d[s]=0;
   while(!isEmpty()){
    t=dequeue();
    for(int i=1;i<=n;i++){
      if(d[i]!=INF || a[t][i]!=1) continue;
       enqueue(i),d[i]=d[t]+1;
    }
  }
}

int main(){
  int top,m,s;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>top>>m;
    for(int j=0;j<m;j++)
      cin>>s,a[top][s]=1;
     } 
  enqueue(1);
   bfs(1);
   for(int i=1;i<=n;i++){
     if(d[i]==INF) d[i]=-1;
     cout<<i<<" "<<d[i]<<endl;
   }
    return 0;
}