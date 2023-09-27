#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int main(){
	int a,b,month[]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	string week[]={"Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"};
	while(cin>>a>>b){
		if(a==0 && b==0)break;
		for(int i=1;i<a;i++){
			b+=month[i];
		}
		cout<<week[b%7]<<endl;
	}
	return 0;
}