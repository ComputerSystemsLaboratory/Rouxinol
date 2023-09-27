#include<iostream>
#include<cstdio>
using namespace std;
typedef struct{
  int A[1000];
  int begin;
  int end;
  bool c;
}node;
node T[105];
int times=0;
int n;
void function(int num){
  if(T[num].begin==0){
  times++;
    T[num].begin=times;
	T[num].c=true;
  }
  for(int j=1;j<=n;j++){
    if(T[num].A[j]==1){
      if(T[j].c==false){
	T[num].A[j]=0;

	function(j);
      }
    }
  }
  if(T[num].end==0){
      times++;
      T[num].end=times;
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
  for(int i=1;i<=n;i++){
    function(i);
  
  }
  for(int i=1;i<=n;i++){
      cout<<i<<" "<<T[i].begin<<" "<<T[i].end<<endl;
  }


  return 0;
}