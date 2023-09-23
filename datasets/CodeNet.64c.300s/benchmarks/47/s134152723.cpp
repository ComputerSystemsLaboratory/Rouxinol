#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;
int main()
{
  int n;
  int count[100] = { 0 };
  int ans[100] = { 0 };
  int bigcnt = 0;

  while(scanf("%d",&n) != EOF){
    count[n-1]++;
  }

  for(int i = 0;i < 100;i++){
    if(bigcnt < count[i]){
      bigcnt = count[i];
    }
  }
  
  int j = 0;

  for(int i = 0;i < 100;i++){
    if(bigcnt == count[i]){
      ans[j] = i+1;
      j++;
    }
  }
  
  for(int i = 0;i < j;i++){
    cout << ans[i] << endl;
  }
  
}