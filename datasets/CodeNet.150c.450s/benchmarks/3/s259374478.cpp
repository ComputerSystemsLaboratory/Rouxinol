#include<iostream>
#include<stdio.h>
#include<string>
#include<stdlib.h>
#include<algorithm>
using namespace std;

int main(){
	string str;
	int q;

	cin>>str>>q;
	int len=str.size();

	for(int i=0; i<q; i++){
		string od, p, tmp;
		int a,b;
		cin>>od;
		if(od=="print"){
			cin>>a>>b;
			cout<<str.substr(a,b-a+1)<<endl;
		}else if(od=="reverse"){
			cin>>a>>b;
			reverse(str.begin()+a, str.begin()+b+1);
			
		}else if(od=="replace"){
			string p;
			cin>>a>>b>>p;
			if(a==0){
				str=p+str.substr(b+1,len-b-1);
			}
			else{
				str=str.substr(0,a)+p+str.substr(b+1,len-b-1);
			}
		}
		
	}

	
	return 0;
}
