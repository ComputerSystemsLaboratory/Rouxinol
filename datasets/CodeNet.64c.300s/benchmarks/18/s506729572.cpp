#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int dan;
long long int memo[40];

int main(){
  memo[1]=1;
  memo[2]=2;
  memo[3]=4;
  for(int i=4;i<31;i++){
    memo[i]=memo[i-1]+memo[i-2]+memo[i-3];
  }
  for(int i=1;i<31;i++){
    if(memo[i]%10==0){
      memo[i]=memo[i]/10;
    }
    else{
      memo[i]=memo[i]/10+1;
    }
  }

  for(int i=1;i<31;i++){
    if(memo[i]%365==0){
      memo[i]=memo[i]/365;
    }
    else{
      memo[i]=memo[i]/365+1;
    }
  }
  
  while(1){
    cin>>dan;
    if(dan==0){break;}
    cout<<memo[dan]<<endl;
  }
}