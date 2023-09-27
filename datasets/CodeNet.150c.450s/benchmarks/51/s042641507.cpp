#include <iostream>
using namespace std;

#define loop(i) for(int i=1;i<=30;i++)
int st[31];

int main(){
  int temp;
  loop(i)st[i]=0;
  loop(i){
    cin>>temp;
    st[temp]=1;
  }
  loop(i){
    if(!st[i])cout<<i<<endl;
  }
  return 0;
}