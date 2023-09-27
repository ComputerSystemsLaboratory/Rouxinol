#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	char c;
	int a[26]={0};
	char d[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int b,i;
	while(scanf("%c",&c)!=EOF){
		if(c>='a'&&c<='z'){
		b=c-'a';
		a[b]++;
		}
		else if(c>='A'&&c<='Z'){
		b=c-'A';
		a[b]++;
		}
	}
	for(i=0;i<26;i++){
		cout << d[i] << " : " << a[i] <<endl;
	}
}