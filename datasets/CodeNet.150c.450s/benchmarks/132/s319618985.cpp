#include<iostream>
#include<vector>
using namespace std;
 
int main()
{
int n,p;
int i,cup;
vector<int> v;
while(cin>>n>>p,n||p){
 v.clear();
 v.resize(n);
 cup=p;
 for(i=0;;i++){
  if(i==n)i=0;
  if(cup){
   v[i]++;
   cup--;
  }else{
   cup+=v[i];
   v[i]=0;
  }
  if(v[i]==p)break;
 }
 cout<<i<<endl;
}
 
}