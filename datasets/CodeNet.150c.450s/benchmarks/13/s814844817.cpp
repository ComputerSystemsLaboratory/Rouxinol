#include<iostream>
#include<string>
using namespace std;
int main(){
  string a,b;
  int ans=0,c=0,aa;
  cin>>a>>b;
  aa=a.size();
  a+=a;
  for(int i=0;i<aa;i++){
    if(a[i]==b[0]){
      for(int j=0;j<b.size();j++){
	if(a[i+j]==b[j])c++;
      }
      if(c == b.size() && ans == 0){
	cout<<"Yes"<<endl;
	ans++;
      }
    }
    c=0;
  }
  if(ans==0)cout<<"No"<<endl;
  return 0;
}