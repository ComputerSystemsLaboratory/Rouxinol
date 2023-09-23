#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main(int argc, char *argv[])
{
  int S[31] = {0};
  for(int i = 0;i < 30;i++){
    int a;
    scanf("%d",&a);
    S[a-1] = 1;
  }
  for(int i = 0;i < 30;i++){
    if(S[i] ==0){
    cout <<i+1<<endl;
    }
  }
  return 0;
}