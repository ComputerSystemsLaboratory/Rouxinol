#include<iostream>
#define ll long long 
using namespace std;

int parent(int i){return i/2;}
int left(int i){return 2*i;}
int right(int i){return 2*i+1;}

int main(){
  int H;
  ll A[251];

  cin>>H;
  for(int i=1;i<=H;i++)cin>>A[i];

  for(int i=1;i<=H;i++){
    cout<<"node "<<i<<": key = "<<A[i]<<", ";
    if(i/2>0) cout<<"parent key = "<<A[parent(i)]<<", ";
    if(0<2*i&&2*i<=H) cout<<"left key = "<<A[left(i)]<<", ";
    if(0<2*i+1&&2*i+1<=H) cout<<"right key = "<<A[right(i)]<<", ";
    cout<<endl;
  }

 
  return 0;
}