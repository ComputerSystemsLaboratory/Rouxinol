#include<iostream>
#include<string>
using namespace std;

int main(){
int a[100000],b[100000],c;
c=0;
char op[100000];
for(int i=1;i<100000;i++){
cin>>a[i]>>op[i]>>b[i];
c++;
if(op[i]=='?'){
goto aa;
}
}
aa:;
for(int i=1;i<c;i++){
if(op[i]=='+'){
cout<<a[i]+b[i]<<endl;
}
if(op[i]=='-'){
cout<<a[i]-b[i]<<endl;
}
if(op[i]=='*'){
cout<<a[i]*b[i]<<endl;
}
if(op[i]=='/'){
cout<<a[i]/b[i]<<endl;
}
}
return 0;
}