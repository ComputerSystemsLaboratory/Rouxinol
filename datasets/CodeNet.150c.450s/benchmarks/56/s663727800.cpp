#include <iostream>

using namespace std;

int main(){
	int n,i;
	cin>>n;
	int min=1000000,max=-1000000;
	long long int sum=0;
	if (n==0){
		cout<<"0 0 0"<<endl;
		return 0;
	}
	for (i=0;i<n;i++){
		int a;
		cin>>a;
		if (a<min){
			min=a;
		}
		if (a>max){
			max=a;
		}
		sum+=a;
	}
	cout<<min<<" "<<max<<" "<<sum<<endl;
	return 0;
}