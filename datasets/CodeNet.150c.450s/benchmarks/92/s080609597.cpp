#include<iostream>
#include<string>
using namespace std;
int main(){
	int a,b;
	while(cin>>a>>b){
		int h=a+b;
		int i=1;
		while(true){
			if(h<10)
				break;
			h/=10;
			i++;
		}
		cout<<i<<endl;
	}
	return 0;
}