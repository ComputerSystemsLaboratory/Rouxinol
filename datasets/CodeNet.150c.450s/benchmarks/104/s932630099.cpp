#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main(){
  int w=0;
  int n=0;
  cin>>w>>n;
  vector<int> vec;
  vec.resize(w);
  for(int i=0;i<w;i++)
    vec[i]=i+1;
  for(int i=0;i<n;i++){
    int a,b;
    scanf("%d,%d",&a,&b);
    swap(vec[a-1],vec[b-1]);
  }
  for(int i=0;i<w;i++)
    cout<<vec[i]<<endl;
  return 0;
}