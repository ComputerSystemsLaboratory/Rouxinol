#include <iostream>
using namespace std;

int main(){
int d;
while(cin >> d){
int s;
s=600/d;
int a;
a=0;
int b;
b=0;
while(a<s){
b=b+d*d*a*a;
a=a+1;}
cout << b*d <<endl;}

}