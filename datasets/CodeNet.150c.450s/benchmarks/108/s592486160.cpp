#include<iostream>
#include<cstdio>
#define INF 1<<30
#define MAX 100000
using namespace std;
  
class Queue{
private:
  int inf[MAX];
  int head,tail;
   
public:
   
  Queue(){
    syokika();
  }
   
  void syokika(){
    head = 0;
    tail = 0;
  }
   
  void push(int x){
    inf[tail]=x;
    if(MAX == tail+1)tail = 0;
    else tail++;
  }
   
  void pop(){
    if(MAX == head+1)head=0;
    else head++;
  }
   
  int front(){
    return inf[head];
  }
   
  bool empty(){
    if(tail - head == 0)return true;
    else return false;
  }
   
  int size(){
    return tail - head;
  }
   
};
  
int imap[200][200];
int k[200] = {0};
int ans[200] = {0};
bool used[200];
  
int main(){
  int n,u[1000];
  cin >> n;
  for(int i=0;i<200;i++)for(int j=0;j<200;j++)imap[j][i] = INF;
  
  for(int i=0;i<200;i++){
    k[i]=ans[i]=u[i]=-1;
  }
  
  for(int i=0;i<n;i++){
    cin >> u[i];
    cin >> k[u[i]];
    for(int j=0;j<k[u[i]];j++){
      cin >> imap[u[i]][j];
    }
  }
  
   int h;
  for(int i=0;i<n;i++){
    int Min = i;
    for(int j=i;j<n;j++){
      if(u[Min] > u[j])Min = j;
    }
    h = u[Min];
    u[Min] = u[i];
    u[i] = h;
  }
  
  Queue que = Queue();
  
  que.push(u[0]);
  ans[u[0]]=0;
  used[u[0]]=true;
  
  while(!que.empty()){
    int p = que.front(); que.pop();
    for(int i=0;i<k[p];i++){
      if(!used[imap[p][i]]){
    que.push(imap[p][i]);//cout << "push!= " << imap[p][i] << endl;
    used[imap[p][i]] = true;
    ans[imap[p][i]] = ans[p] + 1;
      }
    }
  }
  //for(int i=0;i<n;i++)cout << u[i] << endl;
   
  for(int i=0;i<n;i++){
    cout << u[i] << " " << ans[u[i]] << endl;
  }
  
  return 0;
}