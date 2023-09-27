#include<iostream>
using namespace std;

int ret[10][110];
int main(){
  ret[0][0]=1;
  for(int i=9;i>=0;i--){
    for(int j=8;j>=0;j--){
      for(int k=0;k<100;k++){
        if(i+k<=100) ret[j+1][i+k] +=ret[j][k];
      }
    }
  }
  int n,s;
  while(true){
    cin>>n>>s;
    if(n==0) return 0;
    cout<<ret[n][s]<<endl;
  }
}

