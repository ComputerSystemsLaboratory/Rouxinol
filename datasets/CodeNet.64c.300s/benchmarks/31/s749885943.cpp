#include <iostream>
#include <vector>
using namespace std;


int main() {
int a[31]={0};
for(int u=0;u<28;u++){
	int w;
	cin>>w;
	a[w]=1;
}
for(int i=1;i<31;i++){
	if(a[i]==0) cout<<i<<endl;
	
}


	return 0;
}