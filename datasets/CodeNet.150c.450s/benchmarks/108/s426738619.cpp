#include<iostream>
#include<cstdio>
#define N 101
using namespace std;

typedef struct{
  int q[10000];
  int head;
  int tail;
}Queue;

Queue que;
int g[N][N]; 
int n;
int d[N];
bool us[N];
void Enque(int data){
  que.q[que.tail]=data;
  que.tail++;
}

int Deque(void){
  int data;
  data=que.q[que.head];
  que.head++;
  return data;
}

bool isEmpty(){
  if(que.tail-que.head==0)return true;
  else return false;
}


void bfs(int s){
  int u,v;
  Enque(s);
  while(true){

    if(isEmpty()==true) {
      break;
    }
    u=Deque();
    //  cout << "u = " << u << endl;
      for(int i=1;i<= n;i++){
 
      if(us[i]==false && g[u][i] == 1){
	v=i;
	//	cout << "i - " << i <<endl;
	us[i]=true;
	d[v]=d[u]+1;
	Enque(v);
      }
    }
  }
}

int main(){

  int n2,data,u;

 //load n
  cin >>n;

  //initialize
  que.tail=0;
  que.head=0;
  for(int i=0;i<N;i++){
    us[i]=false;
    d[i]=-1;
    for(int j=0;j<N;j++){
      g[i][j]=0;
    }
  }

  //load data
  for(int i=0;i<n;i++){
    scanf("%d%d",&u,&n2);
    for(int j=0;j<n2;j++){
      scanf("%d",&data);
      g[u][data]=1;
    }
  }
  //execute

  d[1]=0;
  us[1]=true;
  bfs(1);


  //print
  for(int i=1;i<=n;i++){
    printf("%d %d\n",i,d[i]); 
  }

  return 0;
}