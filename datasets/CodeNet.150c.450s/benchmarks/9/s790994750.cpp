#include<iostream>
#include<string>
using namespace std;
int main(){
	string d;
	int m;
	int count=0;
	int h[100];
	
	while(cin>>d){
		cin>>m;
		if(d[0]=='-')
			break;
		for(int i=0;d[i]!='\0';i++)
			count++;
		for(int i=0;i<m;i++){
			cin>>h[i];
			string left = d.substr(0, h[i]);
			string right=d.substr(h[i],count);
			d=right+left;
		}
		cout<<d<<endl;
	}
} 
	
	
	