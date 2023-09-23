#include <iostream>
using namespace std;

int main() {
	int a,b;
	int S=0,T=0;
	for (int i = 1; i <= 4; i++){
		cin>>a;
		S=S+a;
		
	}

	for (int i = 1; i <= 4; i++){
		cin>>b;
		T=T+b;
	}
	
	if(S>T){
		cout<<S<<endl;
	} else if(S<=T){
		cout<<T<<endl;
	}
	// your code goes here
	return 0;
}