#include <iostream>
using namespace std;
int main(){
	int sum[2],T,a,b,c,d;
	for(int i=0;i<2;++i){
		cin>>a>>b>>c>>d;
		sum[i]=a+b+c+d;
	}
	cout<<max(sum[0],sum[1])<<endl;
	return 0;
}