#include<iostream>
using namespace std;
int main(){
int n=1;
int a,b,pa,pb;
for(;n!=0;){
cin>>n;
if(n==0){break;}
pa=0;pb=0;
for(int i=0;i<n;i++){
a=0;b=0;
cin>>a;
cin>>b;
if(a>b){pa+=a+b;}
if(a==b){pa+=a;pb+=b;}
if(a<b){pb+=a+b;}
}
cout<<pa<<" "<<pb<<endl;
}
return 0;
}