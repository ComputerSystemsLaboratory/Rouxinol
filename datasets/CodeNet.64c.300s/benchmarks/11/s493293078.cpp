#include<iostream>
using namespace std;
int main(){
int in;
cin>>in;
int a,b;
a=in/3600;
in%=3600;
b=in/60;
in%=60;
cout<<a<<":"<<b<<":"<<in<<endl;
}