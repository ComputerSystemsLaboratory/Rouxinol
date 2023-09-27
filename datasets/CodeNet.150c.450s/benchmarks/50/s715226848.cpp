#include <iostream>
#include <string>
using namespace std;
int main(){
int a;
int b;
int c;
while(cin >> a){
if(a!=0){b=1000-a;
c=0;
if(b>=500){b=b-500; c=c+1;}
if(b>=100){while(b>=100){b=b-100; c=c+1;}}
if(b>=50){b=b-50; c=c+1;}
if(b>=10){while(b>=10){b=b-10; c=c+1;}}
if(b>=5){b=b-5; c=c+1;}
c=b+c;
cout << c<<endl;
}
}
}