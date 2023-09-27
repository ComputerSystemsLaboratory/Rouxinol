#include<iostream>
using namespace std;
int main(){
int n;
int num=0;
while(cin>>n){
for(int h=0;h<=9;h++){
for(int i=0;i<=9;i++){
for(int j=0;j<=9;j++){
for(int k=0;k<=9;k++){
if(h+i+j+k==n){num++;}
}
}
}
}
cout<<num<<endl;
num=0;
}
}