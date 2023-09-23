#include<iostream>
#define WIDTH 600
using namespace std;

int func(int x,int d){
	return x*x*d;
}

int main(){
	int d;
	while(cin>>d){
		unsigned int S=0;
		for(int i=0;i<WIDTH;i+=d){
			S+=func(i,d);
		}
		cout<<S<<endl;
	}

}