#include <iostream>
using namespace std;

void call(int n){
  for(int i=1;i<=n;i++){
    int x=i;
    if(x%3==0){
      cout<<" "<<x; continue;
    }
    while(x!=0){
      if(x%10==3){
        cout<<" "<<i; break;
      }
      x/=10;
    }
  }

}
int main(){
  int n;
  cin>>n;
  call(n);
  cout<<"\n";
}