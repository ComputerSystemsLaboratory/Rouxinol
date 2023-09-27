//itp1_9-c
#include <iostream>
#include <cstring>
using namespace std;

int main(){
 int n;
 string s1,s2;
 int cntt=0;
 int cnth=0;
 
 cin>>n;
 for(int i=0;i<n;i++){
  cin>>s1>>s2;
  if(s1>s2) cntt+=3;
  else if(s1<s2) cnth+=3;
  else{
   cntt++;
   cnth++;
  }
 }
 cout<<cntt<<" "<<cnth<<endl;

return 0;
}