#include<iostream>
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
    for(int i=2;i<=n;i++){
      if(T[num].A[i]==1&&T[i].c==false){
	if(T[i].ans==0){
	  T[i].ans=T[num].ans+1;
	  T[num].A[i]=0;
	}
	Q[tail++]=i;
      }
    }
    //    cout<<"Q "<<Q[head]<<endl;
    //  cout<<head<<" "<<tail<<endl;
  }

}

int main(){
  int num;
  int son;
  int z;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>num;
    cin>>son;
    for(int j=0;j<son;j++){
      cin>>z;
      T[num].A[z]=1;
      }
  }
  Q[0]=1;
  function(1);
  T[1].ans=0;
  for(int i=2;i<=n;i++){
    if(T[i].ans==0){
      T[i].ans=-1;
    }
  }

  for(int i=1;i<=n;i++){
      cout<<i<<" "<<T[i].ans<<endl;
  }


  return 0;
}