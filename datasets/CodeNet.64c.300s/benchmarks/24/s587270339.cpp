#include <iostream>
using namespace std;

int main()
{
	int n;
	while(cin>>n,n){
	int A=0,B=0;
	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
		if(x>y)A+=x+y;
		else if(x<y)B+=x+y;
		else A+=x,B+=y;
		}
		cout<<A<<" "<<B<<"\n";
	}
	return 0;
}