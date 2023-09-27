#include <iostream>
#include <string>
using namespace std;
 
bool flag;
 
bool check(string t, string u){
 if(u==t){
  if(!flag)cout << "Opened by " << t << endl;
  else cout << "Closed by " << t << endl;
  flag ^= 1;
  return true;
 }
 return false;
}
 
 
int main(){
 int n,i,j,m;
 bool ans=false;
 string u[260],t[260];
 cin >> n;
 for(i=0;i<n;i++)cin >> u[i];
 cin >> m;
 for(i=0;i<m;i++)cin >> t[i];
 for(i=0;i<m;i++){
  ans = false;
  for(j=0;j<n;j++)ans|=check(t[i],u[j]);
  if(!ans)cout << "Unknown " << t[i] << endl;
 }
 return 0;
}
