#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<cmath>
using namespace std;

int main()
{
  int n,a;
  int i,j;
  int b[5005]={};

  while(1){
    priority_queue<int> pq;
    cin>>n;
    if(n==0)break;
    for(i=1;i<=n;i++){
      cin>>a;
      b[i]=b[i-1]+a;
      for(j=i-1;j>=0;j--)
	pq.push(b[i]-b[j]);
    }
    cout<<pq.top()<<endl;
  }
}