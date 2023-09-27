#include<iostream>
using namespace std

;

int main(){

for(int a,b,t; ;){

cin>>a>>b;

if (a==0 && b==0){break;}

if (a>b){

t=a;

a=b;

b=t;

}

cout<<a<<" "<<b<<"\n";

}

return 0;

}