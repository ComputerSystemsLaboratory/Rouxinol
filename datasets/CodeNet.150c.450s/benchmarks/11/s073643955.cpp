#include <iostream>
#include <vector>
using namespace std;

int s[13],h[13],c[13],d[13];
int main(){
	char ID;
	int N,tmp;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>ID>>tmp;
		tmp--;
		if(ID=='S')
		{
			s[tmp]=1;
		}
		if(ID=='H')
		{
			h[tmp]=1;
		}
		if(ID=='C')
		{
			c[tmp]=1;
		}
		if(ID=='D')
		{
			d[tmp]=1;
		}
	}
	for(int i=0;i<13;i++){
		if(s[i]==0)
		cout<<"S "<<i+1<<endl;
	}
		for(int i=0;i<13;i++){
		if(h[i]==0)
		cout<<"H "<<i+1<<endl;
	}
		for(int i=0;i<13;i++){
		if(c[i]==0)
		cout<<"C "<<i+1<<endl;
	}
		for(int i=0;i<13;i++){
		if(d[i]==0)
		cout<<"D "<<i+1<<endl;
	}
	return 0;
}