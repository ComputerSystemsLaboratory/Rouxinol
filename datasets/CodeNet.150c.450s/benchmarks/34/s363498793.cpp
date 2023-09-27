#include<iostream>
using namespace std;
int main(){
  int ans[31]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,3,6,10,19,34,62,113,207,381,701,1288,2369,4357,8014,14740};
  while(1){
    cin>>ans[0];
    if(!ans[0])
      return 0;
    cout<<ans[ans[0]]<<endl;
  }
}