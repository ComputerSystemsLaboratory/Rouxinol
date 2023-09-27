#include <iostream>
#include <string>
using namespace std;
int main(){
int n;


int c;
string d;
int m;
int e;
int f;
while(cin >> n){
if(n!=0){
string a[n];
string b[n];
c=0;
while(c<n){
cin >>a[c];
cin >>b[c];
c=c+1;}


cin >> m;
c=0;

while(c<m){
cin >>d;
e=0;
f=0;
while(e<n){
if(d==a[e]){cout<<b[e]; f=1;}
e=e+1;
}
if(f==0){cout <<d;}
c=c+1;}
cout << endl;
}
}
}