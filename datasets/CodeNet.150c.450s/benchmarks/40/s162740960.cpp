#include <bits/stdc++.h>
using namespace std;
int  huru(string x,int d1,int d2,int d3,int d4,int d5,int d6){
	int a,b;
	for(int i = 0;i<x.size();i++){
		if(x.at(i) == 'E'){
			a = d3;
			d3 = d1;
			d1 = d4;
			d4 = d6;
			d6 = a;
		}
		if(x.at(i) == 'S'){
			a = d2;
			d2 = d1;
			d1 = d5;
			d5 = d6; 
			d6 = a;
		}
		if(x.at(i) == 'W'){
			a = d4;
			d4 = d1;
			d1 = d3;
			d3 = d6;
			d6 = a;
		}
		if(x.at(i) == 'N'){
			a = d5;
			d5 = d1;
			b = d6;
			d6 = a;
			a = d2;
			d2 = b;
			d1  =  a;
		}
		a = 0;
	}
		return d1;
	}
int main(){
	int s1,s2,s3,s4,s5,s6;
	cin>>s1>>s2>>s3>>s4>>s5>>s6;
	string x;
	cin>>x;
	
	cout<<huru(x,s1,s2,s3,s4,s5,s6)<<endl;
	return 0;
}
