#include <iostream>
#include <algorithm>
using namespace std;
int main(){
 int a[4],b[4],h,bb,i;
 while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>b[0]>>b[1]>>b[2]>>b[3]){
  h=bb=0;
  for(i=0;i<4;i++)if(a[i]==b[i])h++;
  sort(a,a+4);sort(b,b+4);
  for(i=0;i<4;i++)if(find(b,b+4,a[i])!=b+4)bb++;
  bb -= h;
  cout<<h<<" "<<bb<< endl;
 }
}