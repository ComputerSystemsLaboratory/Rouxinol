#include <iostream>
#include <algorithm>
using namespace std;
long int x[10000],n,sum;
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x[i];
		sum=sum+x[i];
	}
	sort(x,x+n);
	cout<<x[0]<<" "<<x[n-1]<<" "<<sum<<endl;
	return 0;
}