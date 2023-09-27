#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
int main(){
string s,c;
int g=0,i,a,b;
cin>>c;
while(1){
cin>>s;
for(i=0;i<s.size();i++){
	b=s[i];
	a=c[i];
	if(a==b+32)s[i]=b+32;
	if(a==b-32)s[i]=b-32;
}
if(s==c)g++;
if(s=="END_OF_TEXT")break;
}
cout<<g<<endl;
return 0;
}