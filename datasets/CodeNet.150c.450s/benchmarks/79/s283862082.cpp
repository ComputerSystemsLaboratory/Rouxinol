#include<bits/stdc++.h>
using namespace std;





int main(){
  while(1){
  int n,r;
  cin>>n>>r;
  if(n==0 && r==0){break;}
  int a[1000];
  for(int i=0;i<1000;i++){a[i]=i;}
  for(int i=0;i<r;i++){
    vector<int> b(0);
    vector<int> d(0);
    int p,c;
    cin>>p>>c;
    for(int i=p;i<p+c;i++){
      b.push_back(a[i]);
    }
    for(int i=1;i<p;i++){
      d.push_back(a[i]);
    }
    for(int i=1;i<=c;i++){
      a[i]=b[i-1];
    }
    for(int i=c+1;i<p+c;i++){
      a[i]=d[i-c-1];
    }
  }
  cout<<n-a[1]+1<<endl;
  }
  return 0;
}

