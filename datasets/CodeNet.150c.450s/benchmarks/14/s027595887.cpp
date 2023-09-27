#include<iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  for(int i=1;i<=n;i++){
    int x=i;
    if(x%3==0){
    cout << " " << i;
    }else{
      while(x!=0){
        if(x%10==3){
          cout << " " << i;
          break;
        }else{
          x=x/10;
        }
      }
    }
  }
  cout << endl;
}