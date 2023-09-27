#include<iostream>
using namespace std;

int main(){
int n,p;
int c[50];
for(;;){
cin >> n >> p;
if(!n && !p)break;
for(int i=0;i<n;i++)c[i] = 0;

int pos = -1;
for(;;){
pos = (pos+1)%n;
if(p){
c[pos]++;
p--;
}else{
p = c[pos];
c[pos] = 0;
}
if(!p){
int cnt = 0;
for(int i=0;i<n;i++)
if(c[i])cnt++;
if(cnt==1)break;
}
}
cout << pos << endl;
}
}