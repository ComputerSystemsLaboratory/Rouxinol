#include<bits/stdc++.h>
using namespace std;

string t;
int a[7];

void move(int i){
int b[7];
for(int n=1;n<7;n++){b[n]=a[n];}

if(t[i]=='W'){
a[6]=b[4];
a[4]=b[1];
a[1]=b[3];
a[3]=b[6];
}

if(t[i]=='N'){
a[6]=b[5];
a[5]=b[1];
a[1]=b[2];
a[2]=b[6];
}

if(t[i]=='E'){
a[6]=b[3];
a[3]=b[1];
a[1]=b[4];
a[4]=b[6];
}

if(t[i]=='S'){
a[6]=b[2];
a[2]=b[1];
a[1]=b[5];
a[5]=b[6];
}}



int main(){
for(int n=1;n<7;n++){cin>>a[n];}
cin>>t;
for(int g=0;g<(int)t.size();g++){move(g);}

cout<<a[1]<<endl;

return 0;
}
