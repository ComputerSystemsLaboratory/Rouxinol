#include<iostream>
using namespace std;

int main(){
  int n;
  while(cin >> n,n){
    int y=0;
    for(int i=2;i<=n;i++){
      for(int j=1;j<=n-i+1;j++){
        int x=0;
        for(int k=j;k<=j+i-1;k++)x+=k;
        if(x==n)y++;
      }
    }
  cout << y << endl;
  }
}
  
  