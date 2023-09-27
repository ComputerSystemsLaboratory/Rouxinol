#include<iostream>
using namespace std;

int nlist[10010];

int parent(int i){
  if(nlist[i] == i) return i;
  return (nlist[i]=parent(nlist[i]));
}

int main(){
  int n,q;
  cin>>n>>q;
  for(int i=0;i<n;i++){
    nlist[i]=i;
  }
  for(int i=0;i<q;i++){
    int com,x,y;
    cin>>com>>x>>y;
    int xp=parent(x);
    int yp=parent(y);
    if(com == 0){
      nlist[xp] = yp;
    }else{
      cout<<(xp == yp)<<endl;
    }
  }
  return 0;
}