#include <iostream>
using namespace std;

int main() {
	int a,b,c,n=0;
	
	cin>>a>>b>>c;
	
	for(int i=a;i<=b;++i){
		if(c%i);else++n;
	}
	
	cout<<n<<endl;
	
	return 0;
}