#include<iostream>
using namespace std;
int main(){
int a,b,c;
int i,t;
t=0;
cin>>a>>b>>c;
for(i=1;i<=c;i++){
if(c%i==0 && a<=i && b>=i){
t++;
}
}
cout<<t<<endl;
}