#include<iostream>
#include<cstring>
using namespace std;
int main( ){
  while(1){
    int s=0,d=0;
    char a[1000];
    cin>>a;
    if(a[0]==48)break;
    for(int i=0;i<strlen(a);i++){
      s+=a[i];
      d++;
    }
    cout<<s-d*48<<endl;
  }
  return 0;
}