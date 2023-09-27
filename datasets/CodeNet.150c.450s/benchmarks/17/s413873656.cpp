#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
  int n=0;
  vector<int> v;
  for(int i=0;i<5;i++) {
    cin>>n;
    v.push_back(n);
  }
  sort(v.begin(),v.end());
  reverse(v.begin(),v.end());
  for(int i=0;i<5;i++){
    cout<<v[i];
if(i!=4)
cout<<" ";
}
  cout<<endl;

    
  return 0;
}

