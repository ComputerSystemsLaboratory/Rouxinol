#include<iostream>
#include<string>
using namespace std;

int main(){

  int n;

  while(cin>>n, n){
    int cnt=0;
    string s[100];
    
    for(int i=0;i<n;i++) cin>>s[i];
    for(int i=1;i<n;i+=2) if(s[i-1][1]==s[i][1]) cnt++;

    cout<<cnt<<endl;
  }
  
  return 0;
}