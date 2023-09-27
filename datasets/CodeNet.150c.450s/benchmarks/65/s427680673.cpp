#include <iostream>
#include <vector>
#include <string>
using namespace	std;
int main(){

  vector <string> a,b;
  string tmp;
  int n,i;

  cin>>n;
  for(i=0;i<n;i++){
    cin>>tmp;
    a.push_back(tmp);
  }
  b.assign(a.begin(),a.end());
  for(i=0;i<n-1;i++) for(int j=n-2;j!=i-1;j--) if(a[j][1]>a[j+1][1]) swap(a[j],a[j+1]);
  for(i=0;i<n-1;i++) cout<<a[i]<<" ";
  cout<<a[n-1]<<endl<<"Stable"<<endl;

  for(i=0;i<n-1;i++){
    int now,minnum=101;
    for(int j=i;j<n;j++) if(minnum>b[j].at(1)-'0'){
        now=j;
        minnum=b[j].at(1)-'0';
      }
    if(i!=now)  swap(b[i],b[now]);
  }

  for(i=0;i<n-1;i++) cout<<b[i]<<" ";
  cout<<b[n-1]<<endl;
  if(a==b) cout<<"Stable"<<endl;
  else cout<<"Not stable"<<endl;

  return 0;

}