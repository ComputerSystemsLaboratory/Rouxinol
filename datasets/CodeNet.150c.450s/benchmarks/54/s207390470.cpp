#include<stdio.h>
#include<string>
#include<iostream>
#include<cctype>
using namespace std;
string UP(string s){
	string t=s;
	for(int i=0;i<s.size();i++)
		t[i]=toupper(s[i]);
return t;
}

int main(){
string ch;
string K;
char ty[11],m[11];
int n;n=0;
cin>>ch;
ch=UP(ch);
while(1){
cin>>K;

if(K=="END_OF_TEXT")break;
K=UP(K);
if((ch)==(K))n++;

}
printf("%d\n",n);
return 0;
}