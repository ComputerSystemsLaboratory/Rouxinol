#include<bits/stdc++.h>
using namespace std;
int main(){
  int n, m;
  string s[257], k[257];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>k[i];
  }
  cin>>m;
  for(int i=0;i<m;i++){
    cin>>s[i];
  }
  int count=0, c[300]={};
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      if(s[i] == k[j]){
	count++;
	c[i]++;
	break;
      }
    }
    if(c[i] == 0) cout<<"Unknown"<<" "<<s[i]<<endl;
    else if(c[i] != 0 && count % 2 != 0) cout<<"Opened by"<<" "<<s[i]<<endl;
    else cout<<"Closed by"<<" "<<s[i]<<endl;
  }
  return 0;
}
      
      

