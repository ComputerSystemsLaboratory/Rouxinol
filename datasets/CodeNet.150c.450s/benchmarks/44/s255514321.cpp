#include<iostream>
using namespace std;
int main(){
  int a[4]={0};
  int b[4]={0};
  int i,j;
  while(cin>>a[0]>>a[1]>>a[2]>>a[3]){
    cin>>b[0]>>b[1]>>b[2]>>b[3];
    int h=0,bl=0;
    for(i=0;i<4;i++){
      if(a[i]==b[i]){
	h++;
      }
      for(j=0;j<4;j++){
	if(a[i]==b[j]){
	  bl++;
	}
      }
    }
    bl-=h;
    cout<<h<<" "<<bl<<endl;
  }
  return 0;
}