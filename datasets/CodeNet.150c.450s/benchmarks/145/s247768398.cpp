#include<iostream>
#include <functional>
#include<algorithm>
#include <cmath>
#include <string>
#include <map>
using namespace std;

int main(){

	int max=0;
	string a;
	map<string,int> s;
	string x,y;
	
	cin>>a;
	s[a]++;
	x=y=a;
	
	while(cin>>a){
		s[a]++;
		if(y.size()<a.size())
			y=a;
		if(s[a]>max){
			max=s[a];
			x=a;
		}
	}
	
		cout<<x<<" "<<y<<endl;
}