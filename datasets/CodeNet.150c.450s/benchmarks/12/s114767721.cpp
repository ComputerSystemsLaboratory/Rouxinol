#include<iostream>
using namespace std;
int parent(int i){ return i/2; }
int left(int i){ return i*2; }
int right(int i){ return i*2+1; }
int main(){
  int h,tree[100001];
  cin>>h;
  for(int i=1;i<=h;++i) cin>>tree[i];
  for(int i=1;i<=h;++i){
    cout<<"node "<<i<<": key = "<<tree[i]<<", ";
    if(parent(i)>=1) cout<<"parent key = "<<tree[parent(i)]<<", ";
    if(left(i)<=h) cout<<"left key = "<<tree[left(i)]<<", ";
    if(right(i)<=h) cout<<"right key = "<<tree[right(i)]<<", ";
    cout<<endl;
  }
  return 0;
}

