#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
  int n;

  while(cin>>n,n){
    vector<int> s;
    int t;
    int total=0;
    int cnt=0;
    
    for(int i=0;i<n;++i){
      cin>>t;
      s.push_back(t);
    }

    sort(s.begin(),s.end());

    for(int i=1;i<n-1;++i){
      total+=s[i];
      cnt++;
    }

    cout<<total/cnt<<endl;
  }
}