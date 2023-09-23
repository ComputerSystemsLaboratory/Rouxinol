#include <iostream>
using namespace std;
int main(){
	int n,max=0,h[101]={0};
	while(cin>>n){
		h[n]++;
		if(h[n]>max)max=h[n];
	}
	for(int i=1;i<=100;++i)if(h[i]==max)cout<<i<<"\n";
	return 0;
}