#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main(void){
int n;
cin>>n;
int N=n;
string ret=to_string(n)+ ":";

int cnt=0;
while(n%2==0){
n/=2;
ret+=" 2";
cnt++;
}

int i=3;


while(n>1){
	if(i>(N/2))break;
	while(n%i==0){
	n/=i;
	ret+=(" "+to_string(i));
	cnt++;
	}
	i+=2;
}
	if(cnt==0)ret+=" "+to_string(n);
	cout<<ret<<endl;
return 0;
	
}
