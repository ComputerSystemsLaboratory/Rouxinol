#include<bits/stdc++.h>
#define INFTY (1<<30)
using namespace std;
int H,heep[2000001];
void maxheepify(int i){
  int l,r,leagest;
  l=i*2;
  r=i*2+1;
  //左の子、自分、右の子で値が最大のものを選ぶ
  if(l<=H&&heep[l]>heep[i]) leagest=l;
  else leagest=i;
  if(r<=H&&heep[r]>heep[leagest]) leagest=r;
  if(leagest!=i){
    swap(heep[i],heep[leagest]);
    maxheepify(leagest);
  }
}
void increagkey(int i,int key){
  if(key<heep[i]) return;
  heep[i]=key;
  while(i>1&&heep[i/2]<heep[i]){
    swap(heep[i/2],heep[i]);
    i=i/2;
  }
}
void insert(int key){
  H++;
  heep[H]=-INFTY;
  increagkey(H,key);
}
int extract(){
  int maxv;
  if(H<1) return -INFTY;
  maxv=heep[1];
  heep[1]=heep[H--];
  maxheepify(1);
  return maxv;
}
int main(){
  if(H!=0){
    cin>>H;
    for(int i=1;i<=H;i++){
      cin>>heep[i];
    }
    for(int i=H/2;i>=1;i--){
      maxheepify(i);
    }
    for(int i=1;i<=H;i++){
      cout<<heep[i]<<' ';
    }
    cout<<endl;
  }
  int key;
  string com;
  while(1){
    cin>>com;
    if(com=="end") break;
    if(com=="insert"){
      cin>>key;
      insert(key);
    }else{
      cout<<extract()<<endl;
    }
  }
  return(0);
}
