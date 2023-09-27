#include<cstdio>
#include<iostream>
#include<cctype>
#include<cstring>
using namespace std;
int main(){
	int s;
char a[1001];
while(1){
	scanf("%s",a);
	if(a[0]=='0')break;
s=0;
for(int i=0;i<strlen(a);i++){
	s+=(a[i]-'0');
}
cout<<s<<endl;
}
return 0;
}