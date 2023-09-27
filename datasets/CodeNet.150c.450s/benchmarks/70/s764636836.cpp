#include<iostream>
using namespace std;
int n,m,cnt,i,j;
string str[7]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
int t[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int main(){
  while(cin>>n>>m&&n&&m){
    cnt=3;
    for(i=1;i<=12;i++){
      for(j=1;j<=t[i];j++){
	if(i==n&&j==m)break;
	cnt++;
      }
      if(i==n&&j==m)break;
    }
    //cout<<cnt<<endl;
    cout<<str[cnt%7]<<endl;
  }
  return 0;
}