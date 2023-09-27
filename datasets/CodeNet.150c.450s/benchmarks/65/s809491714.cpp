#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int n,cnt=0;
  pair<char,int> h[100],d[100];
  cin>>n;
  for(int i=0;i<n;i++)cin>>h[i].first>>h[i].second;
  for(int i=0;i<n;i++)d[i]=h[i];
  for(int i=0;i<n;i++)
    for(int j=n-1;j>i;j--)
      if(d[j].second<d[j-1].second)swap(d[j],d[j-1]);
  for(int i=0;i<n;i++){
    cout<<d[i].first<<d[i].second;
    i==n-1?cout<<endl:cout<<" ";
  }cout<<"Stable\n";
  for(int i=0;i<n;i++){
    int minj=i;
    for(int j=i;j<n;j++)if(h[j].second<h[minj].second)minj=j;
    swap(h[i],h[minj]);
  }
  for(int i=0;i<n;i++){
    if(h[i]!=d[i])cnt++;
    cout<<h[i].first<<h[i].second;
    i==n-1?cout<<endl:cout<<" ";
  }cnt==0?cout<<"Stable\n":cout<<"Not stable\n";
  return 0;
}