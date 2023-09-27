//itp1_6-b
#include <iostream>
#include <vector>
using namespace std;

int main(){
 int n;
 char mark;
 int rank;
 vector<bool> s(13,false);
 vector<bool> h(13,false);
 vector<bool> c(13,false);
 vector<bool> d(13,false);

 cin>>n;
 for(int i=0;i<n;i++){
  cin>>mark>>rank;
  if(mark=='S') s[rank-1]=true;
  else if(mark=='H') h[rank-1]=true;
  else if(mark=='C') c[rank-1]=true;
  else if(mark=='D') d[rank-1]=true;
 }
 for(int i=0;i<13;i++){
  if(s[i]==false)
   cout<<'S'<<" "<<i+1<<endl;
 }
 for(int i=0;i<13;i++){
  if(h[i]==false)
   cout<<'H'<<" "<<i+1<<endl;
 }
 for(int i=0;i<13;i++){
  if(c[i]==false)
   cout<<'C'<<" "<<i+1<<endl;
 }
 for(int i=0;i<13;i++){
  if(d[i]==false)
   cout<<'D'<<" "<<i+1<<endl;
 }
return 0;
}