#include<bits/stdc++.h>
using namespace std;

int a[7];

void move(char i){
int b[7];
for(int n=1;n<7;n++){b[n]=a[n];}

if(i=='W'){
a[6]=b[4];
a[4]=b[1];
a[1]=b[3];
a[3]=b[6];
}

if(i=='N'){
a[6]=b[5];
a[5]=b[1];
a[1]=b[2];
a[2]=b[6];
}

if(i=='E'){
a[6]=b[3];
a[3]=b[1];
a[1]=b[4];
a[4]=b[6];
}

if(i=='S'){
a[6]=b[2];
a[2]=b[1];
a[1]=b[5];
a[5]=b[6];
}

if(i=='R'){
a[3]=b[2];
a[2]=b[4];
a[4]=b[5];
a[5]=b[3];
}}



void move2(int m){
if(a[2]==m){move('N');}
if(a[3]==m){move('W');}
if(a[4]==m){move('E');}
if(a[5]==m){move('S');}
if(a[6]==m){move('N'); move('N');}
}

void move3(int l){
if(a[3]==l){move('R'); move('R'); move('R');}
if(a[4]==l){move('R');}
if(a[5]==l){move('R'); move('R');}
}


void move4(int l){
while(1){
if(a[2]!=l){move('R');}
else{break;}
}}




int main(){
int c[1000];
for(int n=1;n<7;n++){cin>>a[n]; c[n]=a[n];}
int x;
cin>>x;

for(int g=0;g<x;g++){
int y,z;
cin>>y>>z;
move2(y);
move4(z);
cout<<a[3]<<endl;
for(int n=1;n<7;n++){a[n]=c[n];}
}


return 0;
}
