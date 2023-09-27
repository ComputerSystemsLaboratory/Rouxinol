#include <iostream>
#include <string>
using namespace std;
int main(){
int a;
int b;
int n;
int d;
int e;
int f;
int g;
while(cin >>a){
cin >> b;
if(a==0){break;}
cin >> n;
int c[a][b];
d=0;
while(d<a){
g=0;
while(g<b){
c[d][g]=-1;
g=g+1;}
d=d+1;}
d=0;
while(d<n){
cin >>e;
cin >>f;
c[e-1][f-1]=0;
d=d+1;}
c[0][0]=1;
d=1;
while(d<a){
if(c[d][0]!=0){c[d][0]=c[d-1][0];}
d=d+1;}
d=1;
while(d<b){
if(c[0][d]!=0){c[0][d]=c[0][d-1];}
d=d+1;}
d=1;
while(d<a){
g=1;
while(g<b){
if(c[d][g]!=0){c[d][g]=c[d-1][g]+c[d][g-1];}
g=g+1;}
d=d+1;}
cout <<c[a-1][b-1]<<endl;}}