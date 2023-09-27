#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int  main(){
  int n,s,sum=0,avg;
  vector<int>a;

  
  while(cin>>n,n){
    sum=0;
    avg=0;
    a.clear();
  for(int i=0;i<n;i++){
    cin>>s;
    a.push_back(s);
  }
 
  sort(a.begin(),a.end());
  
  for(int i=1;i<n-1;i++){
    sum=sum+a.at(i);
  }
    avg=sum/(n-2);
    
    cout<<avg<<endl;

  }



}