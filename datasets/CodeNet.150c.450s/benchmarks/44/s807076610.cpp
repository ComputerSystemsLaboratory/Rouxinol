#include<iostream>
using namespace std;
int main(){
  int a[4],b[4];
  while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>b[0]>>b[1]>>b[2]>>b[3]){
    int aa[10]={};
    int bb[10]={};
    for(int i=0;i<4;i++)
      aa[a[i]]=1;
    for(int i=0;i<4;i++)
      bb[b[i]]=1;
    int blow=0,hit=0;
    for(int i=0;i<10;i++)
      if(aa[i]==bb[i]&&aa[i]==1)
	blow++;
    for(int i=0;i<4;i++){
      if(a[i]==b[i]){
	hit++;
	blow--;
      }
    }
    cout<<hit<<" "<<blow<<endl;
  }
  return 0;
}