#include<iostream>
using namespace std;
int main(){
  char a[100000][2];
  int n,m;
  char in;
  while(cin>>n,n){
    for(int i=0;i<n;i++){
      cin>>a[i][0]>>a[i][1];
    }
    cin>>m;
    for(int i=0;i<m;i++){
      cin>>in;
      bool flg=true;
      for(int j=0;j<n;j++){
	if(a[j][0]==in){cout<<a[j][1];flg=false;break;}
      }
      if(flg)cout<<in;
    }
    cout<<endl;
  }
}