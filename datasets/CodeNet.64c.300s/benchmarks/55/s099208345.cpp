#include<iostream>
using namespace std;

int main(){
  int i=1,x;

  while(cin>>x){
    if(x==0)break;
    cout << "Case " << i << ": "<<x<<"\n";
    i++;
  }
  return 0;
}
