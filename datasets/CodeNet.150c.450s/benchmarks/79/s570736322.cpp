#include<iostream>
#include<vector>
using namespace std;

int main(){
  int n;
  int r;
  while(cin>>n>>r && n+r){
    vector<int> vec;
    vec.resize(n);
    for(int i=0;i<n;i++){
      vec[i]=n-i;
    }

    for(int i=0;i<r;i++){
      int p,c;
      cin>>p>>c;
      p--;
      vector<int> v;
      v.resize(c);
      for(int j=0;j<c;j++){
	v[j]=vec[p+j];
      }
      for(int j=p-1;j>=0;j--){
	vec[j+c]=vec[j];
      }
      for(int j=0;j<c;j++){
	vec[j]=v[j];
      }
    }
    cout<<vec[0]<<endl;

  }
  return 0;
}