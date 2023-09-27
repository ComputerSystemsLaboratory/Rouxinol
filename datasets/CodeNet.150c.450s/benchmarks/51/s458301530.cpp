#include<iostream>
using namespace std;
int main(){
  int st[31],student;
  for(int i=1;i<31;i++){
    st[i]=0;
  }
  for(int i=1;i<29;i++){
    cin>>student;
    st[student]=1;
  }
  for(int i=1;i<31;i++){
    if(st[i]==0){
      cout<<i<<endl;
    }
  }
  return 0;
}