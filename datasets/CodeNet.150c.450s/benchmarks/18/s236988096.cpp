#include <iostream>
using namespace std;

int main(){
	int N;
	cin>>N;
	int res=100000;
	for(int i=1;i<=N;i++){
		res=res*105/100;
		res=(res+999)/1000*1000;
	}
	cout<<res<<endl;
	return 0;
}