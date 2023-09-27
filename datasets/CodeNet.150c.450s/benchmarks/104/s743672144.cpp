#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  int w;
  int n;
  vector<int> vertical;
  int a,b;

  cin>>w;

  for(int i=1;i<=w;++i)
    vertical.push_back(i);

  cin>>n;

  for(int i=0;i<n;++i){
    scanf("%d,%d",&a,&b);
    swap(vertical[a-1],vertical[b-1]);
  }

  for(auto i:vertical)
    cout<<i<<endl;

}