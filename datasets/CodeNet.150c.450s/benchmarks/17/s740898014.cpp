#include<iostream>
using namespace std;

int main(){
int a,b,c,d,e;
int A,B,C,D,E;
cin>>a>>b>>c>>d>>e;
if(a>b){
A=a;
B=b;}
else{
A=b;
B=a;}
if(c<B){
C=c;}
else{
C=B;
if(c<A){
B=c;}
else{
B=A;
A=c;}}
if(d<C){
D=d;}
else{
D=C;
if(d<B){
C=d;}
else{
C=B;
if(d<A){
B=d;}
else{
B=A;
A=d;}}}
if(e<D){
	E=e;}
else{
E=D;
if(e<C){
D=e;}
else{
D=C;
if(e<B){
C=e;}
else{
C=B;
if(e<A){
B=e;}
else{
B=A;
A=e;}}}}
cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E<<endl;
}