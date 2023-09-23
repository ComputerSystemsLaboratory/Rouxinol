#include<iostream>
using namespace std;
#include<cstdio>
int main(){
  int hit,blow;
  int a[4],b[4];
  while(scanf("%d",&a[0])!=EOF){
    hit=0;
    blow=0;
    for(int i=1;i<4;i++){
      cin>>a[i];
    }
    for(int i=0;i<4;i++){
      cin>>b[i];
      if(a[i]==b[i]){
	hit++;
	b[i]=11;
      }
    }
    for(int i=0;i<4;i++){
      for(int j=0;j<4;j++){
	if(a[i]==b[j])blow++;
      }
    }
    cout<<hit<<" "<<blow<<endl;
  }
}