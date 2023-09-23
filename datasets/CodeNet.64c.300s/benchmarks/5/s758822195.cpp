#include<iostream>
#include<algorithm>
using namespace std;


int N,M,p,d[10000],x[4],r,l;
int main(){
for(int i=0;i<10;i++){
cin>>d[i];
}
sort(d,d+10);
for(int i=9;i>6;i--){
cout<<d[i]<<endl;}
return 0;
}