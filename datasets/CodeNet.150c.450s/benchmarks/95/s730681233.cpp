#include <iostream>
#include <string>
using namespace std;
 
int main(){
 bool l,r,u;
string s;
 l=r=u=false;
 int ans=0;
 int n,i;
 cin >> n;
 while(n){
  l=r=u=false;
  ans=0;
  for(i=0;i<n;i++){
   cin >> s;
   if(s=="lu")l=true;
   if(s=="ld")l=false;
   if(s=="ru")r=true;
   if(s=="rd")r=false;
   if(l==r){
    if(u!=l)ans++;
    u=l;
   }
  }
  cout << ans << endl;
  cin >> n;
 }
 return 0;
}
