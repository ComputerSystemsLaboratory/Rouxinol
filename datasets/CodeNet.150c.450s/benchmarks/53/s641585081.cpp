#include<iostream>
#include<cmath>

using namespace std;

int main(){

	int n;

	cin>>n;
	cout<<n<<":";
	for(int i=2;i<=sqrt((double)n);){
		if(n%i==0){
			cout<<" "<<i;
			n/=i;
		}
		else i++;
	}
	if(n!=0) cout<<" "<<n;
	cout<<endl;
}