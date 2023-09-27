#include<iostream>
#include<climits>
using namespace std;

typedef struct{
  int A[1000];
  int ans;
  bool c;
}node;
node T[1000];
int Q[10000000];
int head=0;
int tail=1;
int n;

void function(int num){
  while(true){
    if(head==tail)break;
    num=Q[head++];
    T[num].c=true;
    for(int i=0;i<n;i++){
      if(T[num].A[i]!=0){
	if(T[i].ans>T[num].ans+T[num].A[i]){
	  T[i].ans=T[num].ans+T[num].A[i];
	Q[tail++]=i;
	}
      }
    }
  }
}

int main(){
  int num,son,z,w;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>num>>son;
    T[num].ans=INT_MAX;
    for(int j=0;j<son;j++){
      cin>>z>>w;
      T[num].A[z]=w;
      }
  }
  Q[0]=0;
  T[0].ans=0;
  function(0);
 
  for(int i=0;i<n;i++){
      cout<<i<<" "<<T[i].ans<<endl;
  }
  return 0;
}