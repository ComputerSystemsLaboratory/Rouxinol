#include<stdio.h>
#include<iostream>
using namespace std;
int main(){

long long int a,b,A,B;

while(cin>>a>>b){
 A=a;B=b;
 while (b)
      {
	int tmp = a % b;
	a = b;
	b = tmp;
      }

b=A*B/a;
cout<<a<<" "<<b<<endl;
}
return 0;
}

    