#include <iostream>
using namespace std;

int main(){
  int m,d;
  int dom[12]={31,29,31,30,31,30,31,31,30,31,30,31};
  char w[7][10]={"Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"};
  while(1){
    cin>>m>>d;
    if(m==0||d==0) break;
    int s=0;
    for(int i=0;i<m-1;i++) s += dom[i];
    cout<<w[(s+d)%7]<<endl;
  }
  return 0;
}