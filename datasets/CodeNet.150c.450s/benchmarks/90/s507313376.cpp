//35
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
  int mode[101]={};
  for(int n;cin>>n;){
    mode[n]++;
  }
  int l=0;
  for(;;){
    int *mp=max_element(mode,mode+101);
    if(*mp<l)break;
    l=*mp;
    cout<<mp-mode<<endl;
    *mp=0;
  }
  return 0;
}