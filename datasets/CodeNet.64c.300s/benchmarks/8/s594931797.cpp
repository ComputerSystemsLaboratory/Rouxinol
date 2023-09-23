#include <iostream>
using namespace std;

int main(){
  int n,i,x;
  cin>>n;
  for (i=0;i<=n;i++){
    x=i;
    while(x){
      if (x%3==0){
        cout << " " << i;
        x=0;
      }
      while(x){
        if (x%10==3){
          cout << " " << i;
          x=0;
        }else{
          x/=10;
        }
      }
    }
  }
  cout<<endl;
}

