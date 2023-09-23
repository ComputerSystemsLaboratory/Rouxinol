#include<iostream>
using namespace std;
int t[4],u[4],v[4];

int main(){
  int h,b;
  while(cin>>t[0]){
    for(int i=1;i<4;i++)cin>>t[i];
  for(int i=0;i<4;i++)cin>>u[i];
    h=b=0;
    for(int i=0;i<4;i++){
      if(t[i]==u[i])h++;
      else{
    for(int j=0;j<4;j++){
      if(t[i]==u[j])b++;
    }
      }
    }
    cout<<h<<' '<<b<<endl;
  }
  return 0;
}
