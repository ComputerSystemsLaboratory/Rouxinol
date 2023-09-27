#include<iostream>
#include<algorithm>
#include<string>
#include<math.h>
using namespace std;

int keta(int x){
	int i=0;
	while (x/pow(10,i)>=1){
		i++;
	}
	if (x==0){
		return 1;
	}
	else
	return i;
	}


int main(){
string s;
cin>>s;
int x=s.size();
string a="";
for (int i=1;i<=x;i++){
	a+=s[x-i];
}
cout<<a<<endl;
}