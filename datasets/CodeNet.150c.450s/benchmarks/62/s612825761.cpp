#include<iostream>

using namespace std;

int main(){

int a=0,b=0,c=0,d=0;

cin >> a >> b >> c;

if(a > b){
swap(a,b);
}

if(b > c){
swap(b,c);
}

if(a > b){
swap(a,b);
}

/*
if(a>b){
d = a;
a = b;
b = d;
}

if(b>c){
d = b;
b = c;
c = d;
}

if(a>b){
d = a;
a = b;
b = d;
}
*/
cout << a << " " << b << " " << c << endl;

return 0;

}