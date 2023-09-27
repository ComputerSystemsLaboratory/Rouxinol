#include<iostream>
using namespace std;
int n[10000000],s1,s2;
int main(){
int p,a,b;
while(true){
s1=0;s2=0;
cin>>p;
if(p==0){
break;
}
for(int i=0;i<p;i++){
cin>>a>>b;
if(a>b){s1+=a+b;}
else if(b>a){s2+=a+b;}
else{s1+=a;s2+=b;}
}
cout<<s1<<' '<<s2<<endl;
}
}