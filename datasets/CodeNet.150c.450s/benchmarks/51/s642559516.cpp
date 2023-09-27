#include <iostream>
using namespace std;
int main(){
	int p[31]={0};
	for(int i=0,n;i<28;++i){
		cin>>n;
		p[n]=1;
	}
	for(int i=1;i<31;++i)if(p[i]==0)cout<<i<<"\n";
	return 0;
}