//26
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
  for(;;){
    int n[8];
    for(int i=0;i<8;i++){
      if(!(cin>>n[i]))return 0;
    }
    int hit=0;
    for(int i=0;i<4;i++){
      hit+=n[i]==n[i+4];
    }
    int blow=-hit;
    for(int i=0;i<4;i++){
      blow+=find(n+4,n+8,n[i])!=n+8;
    }
    cout<<hit<<' '<<blow<<endl;
  }
}