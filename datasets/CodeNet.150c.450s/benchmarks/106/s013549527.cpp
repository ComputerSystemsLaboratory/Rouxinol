#include<iostream>
using namespace std

;

int main(){

int a, b, c, t, s;

cin>>a>>b>>c;

for(t=a, s=0;t<=b;t++){

if (c%t==0){

s++;

}

}

cout<<s<<"\n";

return 0;

}