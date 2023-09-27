#include<bits/stdc++.h>
using namespace std;

int main(){
  while(1){
    string s;
    int m, sum=0;
    cin>>s;
    if(s=="-")break;
    cin>>m;
    for(int i=0;i<m;i++){
      int x;
      cin>>x;
      sum+=x;
    }
    int n=s.size();
    for(int i=0;i<n;i++){
      cout<< s[ (i+sum)%n ];
    }
    cout<<endl;
  }
  return 0;
}

