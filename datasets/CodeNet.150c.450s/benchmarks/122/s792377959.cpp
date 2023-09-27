#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int size=1,n[2000000];


void up(int now){
  if(n[now]>n[now/2]&&now>1){
    swap(n[now],n[now/2]);
    up(now/2);
  }
}

void down(int now){
  int l;
  if(now*2<=size-1 && n[now]<n[now*2])l=now*2;
  else l=now;
  if(now*2+1<=size-1 && n[now*2+1]>n[l])l=now*2+1;
  if(l!=now){
    swap(n[now],n[l]);
    down(l);
  }
}

int main(){
  //for(int i=0;i<2001;i++)n[i]=-1;///////
  int a;
  string s;
  size=1;
  while(cin>>s&&s!="end"){
    if(s=="insert"){
      cin>>a;
      n[size]=a;
      up(size);
      size++;
    }else if(s=="extract"){
      cout<<n[1];
      cout<< endl;
      n[1]=n[size-1];
      size--;
      down(1);
    }
    //for(int i=1;i<20;i++)cout<<n[i]<<" ";////////
    //cout<<endl;///////
  }
  return 0;
}