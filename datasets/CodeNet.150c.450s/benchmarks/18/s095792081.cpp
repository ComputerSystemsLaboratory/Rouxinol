#include <iostream>
using namespace std;
int b=100000;
int a;

int main(){
	cin>>a;
	for(int i=0;i<a;i++){
		b*=1.05;
		int d=b/1000;
    if(d*1000<b){
		b=d*1000+1000;
		}    

	}

	cout<<b<<endl;
	return 0;
	}