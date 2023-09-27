#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
  int n,k,x;
  vector<int> s;
  int start,end,ans=0,sum;
  
  while(1){
  
    cin>>n>>k;
    if(n==0 && k==0) break;
  
    for(int i=0;i<n;i++){
      cin>>x;
      s.push_back(x);
    }
    
    start=0;end=k;sum=0;
    for(int i=start;i<end;i++){
        sum+=s[i];
    }
    ans=max(ans,sum);
    
    while(end<n){
      sum+=s[end];
      sum-=s[start];
      ans=max(ans,sum);
      
      start++;end++;
    }
  
    printf("%d\n",ans);
    ans=0;sum=0;
    s.clear();
  }
  return 0;
}