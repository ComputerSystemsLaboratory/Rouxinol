#include <iostream>
#include <string>
using namespace std;
int main(){
int a[4];
int b[4];
int c;
int d;
int e;
int f;
while(cin >>a[0]>>a[1]>>a[2]>>a[3]>>b[0]>>b[1]>>b[2]>>b[3]){
e=0;
f=0;
c=0;
while(c<4){
d=0;
while(d<4){
if(a[c]==b[d]){if(c==d){e=e+1;} else{f=f+1;}}
d=d+1;}
c=c+1;}
cout <<e<<" "<<f<<endl;
}}