#include<iostream>
using namespace std;
bool linearSearch(int,int*,int);

int main(){
  int n,S[10000],T,q,c=0;
  cin>>n;
  for(int i=0;i<n;i++)cin>>S[i];
  cin>>q;
  for(int i=0;i<q;i++){
    cin>>T;
    c+=linearSearch(n,S,T);}
  cout<<c<<endl;
  return 0;
}
//番兵を用いた線形探索
  bool linearSearch(int n,int S[],int T){
    int i=0;
    S[n] =T;
    while(S[i]!=T){
      i++;}
    if(i==n)return false;
    else return true;
  }
      
 