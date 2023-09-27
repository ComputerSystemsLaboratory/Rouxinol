#include<iostream>
using namespace std;
int n,q,A[20],m;
bool check(int a,int s){
  if(s==m)return 1;
  if(a==n)return 0;
 return check(a+1,s+A[a])||check(a+1,s);
}
int main(){
  cin>>n;
  for(int i=0;i<n;i++)cin>>A[i];
  cin>>q;
  for(int i=0;i<q;i++){
    cin>>m;
    if(check(0,0))cout<<"yes"<<endl;
    else cout<<"no"<<endl;
  }
  return 0;
}