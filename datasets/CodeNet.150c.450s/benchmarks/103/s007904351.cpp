#include<iostream>
#include<string>
using namespace std;
int main(){
 int n,s;
 while(true){
 cin>>n>>s;
 if(n==0&&s==0)
 break;
 int count=0;
 for(int i=0;i<1024;i++){
  int bit=i;
  int ncount=0,scount=0;
  for(int j=0;j<10;j++){
      if(bit>>j&1==1){
       ncount++;
       scount+=j;
      }
  }
  if(ncount==n&&scount==s)
  count++;
 }
 cout<<count<<endl;
 }
 return 0;   
}