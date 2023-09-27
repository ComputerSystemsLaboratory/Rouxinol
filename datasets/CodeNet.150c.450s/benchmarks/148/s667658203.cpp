#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int n,a=0,b=0,c=0,d=0;
	cin>>n;
	while(n!=0){
		cin>>s;
		if(s=="AC") a++;
		if(s=="WA") b++;
		if(s=="TLE") c++;
		if(s=="RE") d++;
		n--;
	}
	cout<<"AC"<<" x "<<a<<endl;
	cout<<"WA"<<" x "<<b<<endl;
	cout<<"TLE"<<" x "<<c<<endl;
	cout<<"RE"<<" x "<<d<<endl;
	return 0;
}