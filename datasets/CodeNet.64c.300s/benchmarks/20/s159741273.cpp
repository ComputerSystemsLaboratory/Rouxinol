#include<iostream>

using namespace std;

int main(){
	
	int d;
	while(cin>>d)
	{
		if(d==0) break;
		int y=0,m=0;
		while(m<600){
		
		y+=m*m*d;
		m+=d;;
		}
		cout<<y<<endl;
	}
}