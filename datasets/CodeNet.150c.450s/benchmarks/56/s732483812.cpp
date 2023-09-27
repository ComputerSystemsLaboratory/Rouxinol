#include<iostream>
#include<string>
using namespace std;

int main(){
long long int a[1000000],n,MIN,MAX,SUM;
MIN=100000000;
MAX=-100000000;
SUM=0;
cin>>n;
for(int i=0;i<n;i++){
cin>>a[i];
if(MIN>a[i]){
MIN=a[i];
}
if(MAX<a[i]){
MAX=a[i];
}
SUM += a[i];
}
cout<<MIN<<" "<<MAX<<" "<<SUM<<endl;
return 0;
}