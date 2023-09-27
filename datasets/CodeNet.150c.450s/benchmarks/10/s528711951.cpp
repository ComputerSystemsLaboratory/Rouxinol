//itp1_6-c
#include <iostream>
#include <vector>
using namespace std;

int main(){
 int n;
 cin>>n;
 vector<vector<vector<int> > > a(4,vector<vector<int> >(3,vector<int>(10,0)));
 int b,f,r,v;
 for(int i=0;i<n;i++){
  cin>>b>>f>>r>>v;
  a[b-1][f-1][r-1]+=v;
 }
 for(int i=0;i<15;i++){
  if((i+1)%4==0) cout<<"####################"<<endl;
  else{
   for(int j=0;j<10;j++){
    cout<<" "<<a[i/4][i%4][j];
   }
   cout<<endl;
  }
 }
 return 0;
}