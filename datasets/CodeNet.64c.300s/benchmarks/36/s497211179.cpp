#include <algorithm>
#include <iostream>
using namespace std;
int a[3];
  int main (){
for(int i=0;i<3;i++){
cin>>a[i];}
sort(a,a+3);
for(int i=0;i<3;i++){
cout<<a[i];
if(i!=2){cout<<" ";}}
cout<<endl;
return 0;
}