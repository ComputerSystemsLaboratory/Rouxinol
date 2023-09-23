#include <iostream>
#include <string>
using namespace std;
int main(){
int n;
int a;
int b;
int c;
int d;
int e;
while(cin >>n){
c=0;
d=0;
e=0;
if(n!=0){while(e<n){
cin >>a;
cin >>b;
if(a>b){c=c+a+b;}
if(a==b){c=c+a; d=d+b;}
if(a<b){d=d+a+b;}
e=e+1;}
cout << c <<" "<<d<<endl;
}
}

}