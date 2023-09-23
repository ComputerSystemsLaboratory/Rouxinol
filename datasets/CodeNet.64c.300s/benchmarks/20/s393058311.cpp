#include<iostream>
using namespace std;

int main(){
int a=0,b=0;
int d;
while(cin>>d){
	a=0;
	b=0;
for(int i=0;i<600/d;i++){
b+=a*a;
a+=d;
}
cout<<b*d<<endl;
}
}