#include <iostream>
using namespace std;
int main()
{
	int a,b;
	for(;;){
		cin>>a>>b;
		if(a==0 && b==0)break;
		if(a<=b){
			cout<<a<<" "<<b<<endl;
		}
		else if(a>b){
			cout<<b<<" "<<a<<endl;
		}
	}
	return 0;
}