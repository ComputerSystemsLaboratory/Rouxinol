#include <iostream> 
#include <string> 
#include <vector> 
#include <cmath> 
#include <algorithm> 
#include <cstdlib> 

using namespace std;

int main()
{
	int n,ca,cb,A,B;

	cin>>n;
	while(n>0){
		ca=cb=A=B=0;
		for(int i=0;i<n;i++){
			cin>>ca>>cb;
			if(ca>cb) A+=ca+cb;
			else if(cb>ca) B+=ca+cb;
			else{A+=ca;B+=cb;}
		}
		cout<<A<<" "<<B<<endl;
		cin>>n;
	}

	return 0;
}