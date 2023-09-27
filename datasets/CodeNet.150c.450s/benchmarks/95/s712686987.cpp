#include<iostream>
using namespace std;
bool l,r,b;
int n,ans;
string s;
int main(){
  while(1){
    cin>>n;
    if(n==0)break;
    ans=l=r=b=0;
    for(int i=0;i<n;i++){
      cin>>s;
      if(s=="lu")l=true;
      else if(s=="ru")r=true;
      else if(s=="ld")l=false;
      else if(s=="rd")r=false;
      if(l==r&&l!=b){
	b=l;
	ans++;
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}